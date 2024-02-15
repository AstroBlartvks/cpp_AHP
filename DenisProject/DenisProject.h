#pragma once

#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include <map>
#include <math.h>
#include "qdebug.h"
#include "ui_DenisProject.h"
#include "MethodAnalysisHierarchy.h"

class TableSaver {
private:
    float** table;  //������� ��������
    //���������� ���������������
    float constant_table[15] = { 0, 0.09, 0.58, 0.9, 1.12, 1.24, 1.32, 1.41, 1.42, 1.49, 1.51, 1.53, 1.56, 1.57, 1.59 };
public:
    int w;          //������ - �������
    int h;          //������ - ������
    int h_index;    //������������ �������
    int w_index;    //������������ ������

    void setTableSaver(int w, int h);                                           //���������� ��������� �������� �������
    void add_value(float value);                                                //�������� �������� add
    void set_value(int x, int y, float value);                                  //���������� �������� [x, y]
    void find_relations(float *index_agreement, float *consistency_relation);   //����� �� � ��

    float get_value(int x, int y);                                              //������� �������� [x, y]
    float vector(int row);                                                      //������� ������
    float find_sum();                                                           //����� L ����� ��� ��������
    float vector_normalisation(float vector_to, float L_sum);                   //������� ��������������� ������
    float column_sum(int column);                                               //������� ����� ������
    ~TableSaver();
};

class DenisProject : public QMainWindow
{
    Q_OBJECT

public:
    QStringList critertia = {};                             //��������
    QStringList alternatives = {};                          //������������

    std::map<std::string, TableSaver> programm_tables;      //�������� ������ ��������
    std::vector<float> results;

    std::vector<float> alternatives_results_2;
    float sum_max;

    DenisProject(QWidget *parent = nullptr);                
    ~DenisProject();

private:
    Ui::DenisProjectClass ui;
   
    //��������� UI
    void change_page(int index);
    void connect_change_buttons();

    //������ �������� 1
    void connect_page_1();
    void set_size_table_1();
    void save_analogues_criteria();
    void prepare_table_2(int rows);
    
    //������ �������� 2
    void connect_page_2();
    void reverse_number_table_2(QTableWidgetItem* item);        //����� �������� �������� ��� ������ [y, x] = 1 / [x, y]
    void handle_matrix_paired_comparisons();                    //��������� ���, ���������� ��������, ��, ��

    //������ �������� 3
    void connect_page_3();
    void prepare_table_3();
    void save_criteria_table();                                 //��������� ������ �����������, ���������� ��������, ��, ��
    void reverse_number_alternative(QTableWidgetItem* item);    //����� �������� �������� ��� ������ [y, x] = 1 / [x, y]

    //������ �������� 4
    void connect_page_4();
    void get_results();                                         //��������� ����������� ������ ���������
    void draw_influence_diagrams();

    //�������������� �������
    float get_reverse_number(QTableWidgetItem* item);

    //������
    void number_error();
};
