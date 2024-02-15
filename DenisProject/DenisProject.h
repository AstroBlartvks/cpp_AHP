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
    float** table;  //Таблица хранения
    //Коэфиценты согласованности
    float constant_table[15] = { 0, 0.09, 0.58, 0.9, 1.12, 1.24, 1.32, 1.41, 1.42, 1.49, 1.51, 1.53, 1.56, 1.57, 1.59 };
public:
    int w;          //Ширина - колонны
    int h;          //Высота - строки
    int h_index;    //Используемая колонна
    int w_index;    //Используемая строка

    void setTableSaver(int w, int h);                                           //Установить начальные значения таблицы
    void add_value(float value);                                                //Добавить значение add
    void set_value(int x, int y, float value);                                  //Установить значение [x, y]
    void find_relations(float *index_agreement, float *consistency_relation);   //Найти ИС и ОС

    float get_value(int x, int y);                                              //Вернуть значение [x, y]
    float vector(int row);                                                      //Вернуть вектор
    float find_sum();                                                           //Найти L сумму для векторов
    float vector_normalisation(float vector_to, float L_sum);                   //Вернуть нормализованный вектор
    float column_sum(int column);                                               //Вернуть сумму колонн
    ~TableSaver();
};

class DenisProject : public QMainWindow
{
    Q_OBJECT

public:
    QStringList critertia = {};                             //Критерии
    QStringList alternatives = {};                          //Альтернативы

    std::map<std::string, TableSaver> programm_tables;      //Хранение таблиц значений
    std::vector<float> results;

    std::vector<float> alternatives_results_2;
    float sum_max;

    DenisProject(QWidget *parent = nullptr);                
    ~DenisProject();

private:
    Ui::DenisProjectClass ui;
   
    //Настройка UI
    void change_page(int index);
    void connect_change_buttons();

    //Раздел страницы 1
    void connect_page_1();
    void set_size_table_1();
    void save_analogues_criteria();
    void prepare_table_2(int rows);
    
    //Раздел страницы 2
    void connect_page_2();
    void reverse_number_table_2(QTableWidgetItem* item);        //Найти обратные значения для ячейки [y, x] = 1 / [x, y]
    void handle_matrix_paired_comparisons();                    //Обработка МПС, нахождение векторов, ИС, ОС

    //Раздел страницы 3
    void connect_page_3();
    void prepare_table_3();
    void save_criteria_table();                                 //Обработка таблиц альтернатив, нахождение векторов, ИС, ОС
    void reverse_number_alternative(QTableWidgetItem* item);    //Найти обратные значения для ячейки [y, x] = 1 / [x, y]

    //Раздел страницы 4
    void connect_page_4();
    void get_results();                                         //Получение результатов работы программы
    void draw_influence_diagrams();

    //Дополнительные функции
    float get_reverse_number(QTableWidgetItem* item);

    //Ошибки
    void number_error();
};
