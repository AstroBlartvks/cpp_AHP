#include "DenisProject.h"


void TableSaver::setTableSaver(int columns, int rows) {
    this->w = columns;
    this->h = rows;
    this->table = new float* [columns];
    for (int i = 0; i < columns; i++) {
        this->table[i] = new float [rows];
    }
}

void TableSaver::add_value(float value) {
    this->h_index += 1;
    if (this->h_index > this->h) {
        this->h_index = 0;
        this->w_index += 1;
        if (this->w_index > this->w) {
            this->w_index = 0;
        }
    }
    this->table[this->w_index][this->h_index] = value;
}

void TableSaver::set_value(int x, int y, float value) {
    this->table[x][y] = value;
}

float TableSaver::get_value(int x, int y) {
    return this->table[x][y];
}

float TableSaver::vector(int row) {
    float vector_to = 1.0;
    for (int i = 0; i < this->w; i++) {
        vector_to *= this->table[i][row];
    }
    vector_to = powf(vector_to, (1.0 / (float)this->w));
    return vector_to;
}

float TableSaver::find_sum() {
    float L_sum = 0;
    for (int i = 0; i < this->h; i++) {
        L_sum += vector(i);
    }
    return L_sum;
}

float TableSaver::column_sum(int column) {
    float sum_column = 0;
    for (int i = 0; i < this->h; i++) {
        sum_column += this->table[column][i];
    }
    return sum_column;
}

float TableSaver::vector_normalisation(float vector_to, float L_sum) {
    return vector_to / L_sum;
}

void TableSaver::find_relations(float *index_agreement, float *consistency_relation) {
    float column_sum;
    float vector_to;
    float vector_normalized;
    float L_sum;
    float L_max = 0;
    int arguments_count = this->h;

    L_sum = this->find_sum();

    for (int i = 0; i < arguments_count; i++) {
        vector_to = this->vector(i);
        vector_normalized = this->vector_normalisation(vector_to, L_sum);

        column_sum = this->column_sum(i);
        L_max += column_sum * vector_normalized;
    }

    *index_agreement = (L_max - arguments_count) / (arguments_count - 1);
    if (*index_agreement < 0) {
        *index_agreement = 0.0;
    }
    *consistency_relation = *index_agreement * this->constant_table[arguments_count - 1];
}

TableSaver::~TableSaver() {
    for (int i = 0; i < this->w; i++) {
        delete[] this->table[i];
    }
    delete[] table;
}


DenisProject::DenisProject(QWidget *parent) : QMainWindow(parent)
{
    ui.setupUi(this);

    DenisProject::connect_change_buttons();
    DenisProject::connect_page_1();
    DenisProject::connect_page_2();
    DenisProject::connect_page_3();
    DenisProject::connect_page_4();
}

void DenisProject::connect_page_4() {
    connect(ui.pushButton_3, &QPushButton::released, this, &DenisProject::get_results);
}

void DenisProject::draw_influence_diagrams() {

    QColor colors[] = {
        QColor(20,149,169), QColor(74,169,20), QColor(169,20,74), 
        QColor(149,169,20), QColor(169,115,20), QColor(20,169,115),
        QColor(20,100,169), QColor(169,40,20), QColor(40,20,169)
    };
    QVector<double> ticks;
    QVector<double> ticks_y;
    QVector<QString> labels;
    int index = 0;

    for (auto it : this->critertia) {
        ticks_y.append(index + 1);
        index += 1;
    }

    index = 0;

    for (auto it : this->alternatives) {
        ticks.append(index + 1);
        labels.append(it);
        index += 1;
    }

    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);

    ui.widget->clearPlottables();

    ui.widget->xAxis->setTicker(textTicker);
    ui.widget->xAxis->setTickLabelRotation(60);
    ui.widget->xAxis->setSubTicks(false);
    ui.widget->xAxis->setTickLength(0, (int)(index/2));
    ui.widget->xAxis->setRange(0, index);
    ui.widget->xAxis->setBasePen(QPen(Qt::blue));
    ui.widget->xAxis->setTickPen(QPen(Qt::blue));
    ui.widget->xAxis->grid()->setVisible(true);
    ui.widget->xAxis->grid()->setPen(QPen(QColor(0, 90, 158), 0, Qt::DotLine));
    ui.widget->xAxis->setTickLabelColor(Qt::blue);
    ui.widget->xAxis->setLabelColor(Qt::blue);

    // prepare y axis:
    ui.widget->yAxis->setRange(0, this->sum_max);
    //ui.widget->yAxis->setPadding(1);
    ui.widget->yAxis->setLabel(u8"Результаты метода анализа иерархии");
    ui.widget->yAxis->setBasePen(QPen(Qt::blue));
    ui.widget->yAxis->setTickPen(QPen(Qt::blue));
    ui.widget->yAxis->setSubTickPen(QPen(Qt::blue));
    ui.widget->yAxis->grid()->setSubGridVisible(true);
    ui.widget->yAxis->setTickLabelColor(Qt::blue);
    ui.widget->yAxis->setLabelColor(Qt::blue);
    ui.widget->yAxis->grid()->setPen(QPen(QColor(0, 90, 158), 0, Qt::SolidLine));
    ui.widget->yAxis->grid()->setSubGridPen(QPen(QColor(0, 90, 158), 0, Qt::DotLine));

    QCPBars* res;
    QCPBars* last;
    QVector<double> crit_result = {};

    for (int crit_index = 0; crit_index < this->critertia.size(); crit_index++) {
        res = new QCPBars(ui.widget->xAxis, ui.widget->yAxis);
        res->setAntialiased(false);
        res->setStackingGap(1);
        res->setName(this->critertia.at(crit_index));
        res->setPen(QPen(colors[crit_index % 9].lighter(170)));
        res->setBrush(colors[crit_index % 9]);

        crit_result = {};
        index = crit_index * alternatives.size();
        for (int alt_index = 0; alt_index < this->alternatives.size(); alt_index++) {
            crit_result.append(this->alternatives_results_2[index + alt_index]);
        }
        
        if (crit_index > 0) {
            res->moveAbove(last);
        }
        last = res;

        res->setData(ticks, crit_result);
       
    }

    ui.widget->legend->setVisible(true);
    ui.widget->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop | Qt::AlignRight);
    ui.widget->legend->setBrush(QColor(255, 255, 255, 100));
    ui.widget->legend->setBorderPen(Qt::NoPen);
    QFont legendFont = font();
    legendFont.setPointSize(12);
    ui.widget->legend->setFont(legendFont);
    ui.widget->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

}

void DenisProject::get_results() {
    //this->programm_tables["matrix_paired_comparisons"]
    if (!(this->programm_tables.count("matrix_paired_comparisons") > 0)) {
        return;
    }

    TableSaver *matrix_pc = &this->programm_tables["matrix_paired_comparisons"];
    this->results.clear();

    for (int i = 0; i < this->alternatives.size(); i++) {
        this->results.push_back(0.0);
    }
    float vector_criteria;
    float vector_alternative;
    int row_number = 0;
    int max_result_index = 0;
    float max_result = 0;
    this->sum_max = 0.0;

    this->alternatives_results_2.clear();

    for (QString string_name : this->critertia) {
        vector_criteria = matrix_pc->vector(row_number);
        vector_criteria = matrix_pc->vector_normalisation(vector_criteria, matrix_pc->find_sum());
        for (int i = 0; i < this->alternatives.size(); i++) {
            vector_alternative = this->programm_tables[string_name.toStdString()].vector(i);
            vector_alternative = this->programm_tables[string_name.toStdString()].vector_normalisation(vector_alternative, this->programm_tables[string_name.toStdString()].find_sum());
            this->results[i] += vector_criteria * vector_alternative;
            this->alternatives_results_2.push_back(vector_criteria * vector_alternative);
            if (this->results[i] > max_result) {
                max_result_index = i;
                max_result = this->results[i];
            }
        }
        row_number += 1;
    }

    this->sum_max = max_result + 0.1;

    QTableWidgetItem* temp_item;
    ui.tableWidget_3->setRowCount(0);
    ui.tableWidget_3->setRowCount(alternatives.size());

    for (int i = 0; i < this->alternatives.size(); i++) {
        temp_item = new QTableWidgetItem(this->alternatives.at(i));
        if (i == max_result_index)
            temp_item->setBackgroundColor(QColor(255, 64, 64));
        ui.tableWidget_3->setItem(i, 0, temp_item);
        temp_item = new QTableWidgetItem(QString::number(this->results[i], 'g', 6));
        if (i == max_result_index)
            temp_item->setBackgroundColor(QColor(255, 64, 64));
        ui.tableWidget_3->setItem(i, 1, temp_item);
    }

    draw_influence_diagrams();
}

void DenisProject::connect_page_3() {
    connect(ui.comboBox, &QComboBox::currentTextChanged, this, &DenisProject::prepare_table_3);
    connect(ui.pushButton_5, &QPushButton::released, this, &DenisProject::save_criteria_table);
    connect(ui.tableWidget_2, &QTableWidget::itemChanged, this, &DenisProject::reverse_number_alternative);
}

void DenisProject::reverse_number_alternative(QTableWidgetItem* item) {
    float number = get_reverse_number(item);
    if (number == 0.0) {
        return;
    }
    int row = item->row();
    int col = item->column();

    QTableWidgetItem* temp_item = new QTableWidgetItem(QString::number(number));
    ui.tableWidget_2->setItem(col, row, temp_item);
}

void DenisProject::save_criteria_table() {
    QString criteria = ui.comboBox->currentText();
    QTableWidgetItem* temp_item;
    QString temp_string;
    float number;
    bool ok;
    
    int columns = ui.tableWidget_2->columnCount();
    int rows = ui.tableWidget_2->rowCount();

    this->programm_tables[criteria.toStdString()] = TableSaver();
    this->programm_tables[criteria.toStdString()].setTableSaver(columns - 1, rows - 1);

    for (int i = 1; i < columns; i++) {
        for (int j = 1; j < rows; j++) {
            temp_item = ui.tableWidget_2->item(i, j);
            if (temp_item == NULL) {
                number_error();
                return;
            }

            temp_string = temp_item->text();
            number = temp_string.toDouble(&ok);

            if (!ok) {
                number_error();
                return;
            }
            this->programm_tables[criteria.toStdString()].set_value(j - 1, i - 1, number);
        }
    }

    float index_agreement;
    float consistency_relation;
    QString anwser = "";
    this->programm_tables[criteria.toStdString()].find_relations(&index_agreement, &consistency_relation);

    if (consistency_relation * 100 > 10.0) {
        ui.label_2->setStyleSheet("border: 0px; font-size: 12px; background-color: rgb(255, 255, 255); color: rgb(255, 85, 0); ");
        anwser = u8"\nТаблица не подходит";
    }
    else {
        ui.label_2->setStyleSheet("border: 0px; font-size: 12px; background-color: rgb(255, 255, 255); color: rgb(0, 85, 255); ");
        anwser = u8"\nТаблица подходит";
    }

    anwser = u8"ИС: " + QString::number(index_agreement, 'g', 5) + u8"\nОС: " + QString::number(consistency_relation * 100, 'g', 5) + "%" + anwser;
    ui.label_2->setText(anwser);
}

void DenisProject::prepare_table_3() {
    int index = ui.comboBox->currentIndex();
    QTableWidgetItem* temp_item; 

    QString text = u8"ИС: 0.0\nОС: 0.0%\nТаблица подходит";
    ui.label_2->setStyleSheet("border: 0px; font-size: 12px; background-color: rgb(255, 255, 255); color: rgb(0, 85, 255); ");
    ui.label_2->setText(text);

    ui.tableWidget_2->setColumnCount(this->alternatives.size() + 1);
    ui.tableWidget_2->setRowCount(this->alternatives.size() + 1);
    ui.tableWidget_2->clear();

    int count = this->programm_tables.count(ui.comboBox->currentText().toStdString());

    for (int it = 0; it < this->alternatives.size(); it++) {
        temp_item = new QTableWidgetItem(this->alternatives.at(it));
        temp_item->setBackgroundColor(QColor(128, 128, 255));
        ui.tableWidget_2->setItem(it + 1, 0, temp_item);
        temp_item = new QTableWidgetItem(this->alternatives.at(it));
        temp_item->setBackgroundColor(QColor(128, 128, 255));
        ui.tableWidget_2->setItem(0, it + 1, temp_item);
        temp_item = new QTableWidgetItem(u8"1");
        ui.tableWidget_2->setItem(it + 1, it + 1, temp_item);
    }

    if (count > 0) {
        float value;
        std::string name_table = ui.comboBox->currentText().toStdString();
        for (int i = 0; i < this->programm_tables[name_table].w; i++) {
            for (int j = 0; j < this->programm_tables[name_table].h; j++) {
                value = this->programm_tables[name_table].get_value(i, j);
                temp_item = new QTableWidgetItem(QString::number(value));
                ui.tableWidget_2->setItem(i + 1, j + 1, temp_item);
            }
        }
    }

}

void DenisProject::connect_page_2() {
    connect(ui.tableWidget, &QTableWidget::itemChanged, this, &DenisProject::reverse_number_table_2);
    connect(ui.pushButton_4, &QPushButton::released, this, &DenisProject::handle_matrix_paired_comparisons);
}

void DenisProject::handle_matrix_paired_comparisons() {
    QTableWidgetItem* temp_item;
    QString temp_string;
    float number;
    bool ok;

    int rows = ui.tableWidget->rowCount();
    int columns = ui.tableWidget->columnCount();

    this->programm_tables["matrix_paired_comparisons"] = TableSaver();
    this->programm_tables["matrix_paired_comparisons"].setTableSaver(columns - 1, rows - 1);

    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < columns; j++) {
            temp_item = ui.tableWidget->item(i, j);
            if (temp_item == NULL) {
                number_error();
                return;
            }

            temp_string = temp_item->text();
            number = temp_string.toDouble(&ok);

            if (!ok) {
                number_error();
                return;
            }
            this->programm_tables["matrix_paired_comparisons"].set_value(j - 1, i - 1, number);
        }
    }
    float index_agreement;
    float consistency_relation;
    QString anwser = "";
    this->programm_tables["matrix_paired_comparisons"].find_relations(&index_agreement, &consistency_relation);

    if (consistency_relation * 100 > 10.0) {
        ui.label->setStyleSheet("border: 0px; font-size: 12px; background-color: rgb(255, 255, 255); color: rgb(255, 85, 0); ");
        anwser = u8"\nТаблица не подходит";
    } else {
        ui.label->setStyleSheet("border: 0px; font-size: 12px; background-color: rgb(255, 255, 255); color: rgb(0, 85, 255); ");
        anwser = u8"\nТаблица подходит";
    }

    anwser = u8"ИС: " + QString::number(index_agreement, 'g', 5) + u8"\nОС: " + QString::number(consistency_relation * 100, 'g', 5) + "%" + anwser;
    ui.label->setText(anwser);
}

void DenisProject::reverse_number_table_2(QTableWidgetItem* item)
{
    float number = get_reverse_number(item);
    if (number == 0.0) {
        return;
    }
    int row = item->row();
    int col = item->column();

    QTableWidgetItem *temp_item = new QTableWidgetItem(QString::number(number));
    ui.tableWidget->setItem(col, row, temp_item);
}

void DenisProject::connect_page_1() {
    this->programm_tables.clear();
    connect(ui.pushButton, &QPushButton::released, this, &DenisProject::set_size_table_1);
    connect(ui.pushButton_2, &QPushButton::released, this, &DenisProject::save_analogues_criteria);
}

void DenisProject::save_analogues_criteria() {
    int columns = ui.tableWidget_4->columnCount();
    int rows = ui.tableWidget_4->rowCount();
    if (columns < 2 || rows < 2) {
        return;
    }
    this->alternatives.clear();
    this->critertia.clear();
    ui.comboBox->clear();

    for (int i = 1; i < columns; i++) {
        this->alternatives.append(ui.tableWidget_4->item(0, i)->text());
    }
    for (int j = 1; j < rows; j++) {
        this->critertia.append(ui.tableWidget_4->item(j, 0)->text());
        ui.comboBox->addItem(ui.tableWidget_4->item(j, 0)->text());
    }
    this->prepare_table_2(rows);
}

void DenisProject::prepare_table_2(int rows) {
    ui.tableWidget->setRowCount(rows);
    ui.tableWidget->setColumnCount(rows);

    QTableWidgetItem* temp_item;
    for (int i = 1; i < rows; i++) {
        temp_item = new QTableWidgetItem(this->critertia.at(i - 1));
        temp_item->setBackgroundColor(QColor(255, 128, 128));
        ui.tableWidget->setItem(0, i, temp_item);
        temp_item = new QTableWidgetItem(this->critertia.at(i - 1));
        temp_item->setBackgroundColor(QColor(255, 128, 128));
        ui.tableWidget->setItem(i, 0, temp_item);
        temp_item = new QTableWidgetItem(QString::fromUtf8(u8"1"));
        ui.tableWidget->setItem(i, i, temp_item);
    }
    temp_item = new QTableWidgetItem(QString::fromUtf8(u8"1"));
    ui.tableWidget->setItem(rows, rows, temp_item);
}

void DenisProject::set_size_table_1() {
    int rows = ui.spinBox->value();
    int columns = ui.spinBox_2->value();
    ui.tableWidget_4->setColumnCount(columns + 1);
    ui.tableWidget_4->setRowCount(rows + 1);
    QTableWidgetItem *temp_item;
    
    for (int i = 1; i <= columns; i++) {
        temp_item = new QTableWidgetItem(QString::fromUtf8(u8"Альтренатива"));
        temp_item->setBackgroundColor(QColor(128, 128, 255));
        ui.tableWidget_4->setItem(0, i, temp_item);
    }

    for (int j = 1; j <= rows + 1; j++) {
        temp_item = new QTableWidgetItem(QString::fromUtf8(u8"Критерий"));
        temp_item->setBackgroundColor(QColor(128, 255, 128));
        ui.tableWidget_4->setItem(j, 0, temp_item);
    }
}

void DenisProject::connect_change_buttons() {
    connect(ui.pushButton_7, &QPushButton::released, this, [=]() {DenisProject::change_page(1); });
    connect(ui.pushButton_8, &QPushButton::released, this, [=]() {DenisProject::change_page(2); });
    connect(ui.pushButton_9, &QPushButton::released, this, [=]() {DenisProject::change_page(3); });
    connect(ui.pushButton_10, &QPushButton::released, this, [=]() {DenisProject::change_page(0); });
    connect(ui.pushButton_12, &QPushButton::released, this, [=]() {DenisProject::change_page(2); });
    connect(ui.pushButton_13, &QPushButton::released, this, [=]() {DenisProject::change_page(3); });
    connect(ui.pushButton_18, &QPushButton::released, this, [=]() {DenisProject::change_page(0); });
    connect(ui.pushButton_19, &QPushButton::released, this, [=]() {DenisProject::change_page(1); });
    connect(ui.pushButton_21, &QPushButton::released, this, [=]() {DenisProject::change_page(3); });
    connect(ui.pushButton_14, &QPushButton::released, this, [=]() {DenisProject::change_page(0); });
    connect(ui.pushButton_15, &QPushButton::released, this, [=]() {DenisProject::change_page(1); });
    connect(ui.pushButton_16, &QPushButton::released, this, [=]() {DenisProject::change_page(2); });
}

void DenisProject::change_page(int index) {
    ui.stackedWidget->setCurrentIndex(index);
}

float DenisProject::get_reverse_number(QTableWidgetItem* item) {
    bool selected = item->isSelected();
    if (!selected) {
        return 0.0;
    }

    int row = item->row();
    int col = item->column();
    QString text = item->text();

    if ((row == col) || (text == "")) {
        return 0.0;
    }

    bool ok;
    float number = text.toDouble(&ok);

    if (!ok) { return 0.0; }

    number = round(10e5 / number) / 10e5;

    if (number < 0.1) {
        return 0.1;
    }
    return number;
}

void DenisProject::number_error() {
    QMessageBox::warning(this, u8"Неверное значение", u8"Вы ввели неверное значение, пожалуйста введите числа");
}

DenisProject::~DenisProject()
{
}
