#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    if (arg1 == "PIC 10B")
    {
        //Reset settings
        ui->label_15->setText("0");
        ui->spinBox->setValue(0);
        ui->spinBox_2->setValue(0);
        ui->spinBox_3->setValue(0);
        ui->spinBox_4->setValue(0);
        ui->spinBox_5->setValue(0);
        ui->spinBox_6->setValue(0);
        ui->spinBox_7->setValue(0);
        ui->spinBox_8->setValue(0);
        ui->spinBox_9->setValue(0);
        ui->spinBox_10->setValue(0);
        ui->spinBox_11->setValue(0);
        ui->spinBox_12->setValue(0);

        ui->label_4->show();
        ui->label_5->show();
        ui->label_6->show();
        ui->label_7->show();
        ui->label_8->show();
        ui->label_9->show();
        ui->spinBox_4->show();
        ui->spinBox_5->show();
        ui->spinBox_6->show();
        ui->spinBox_7->show();
        ui->spinBox_8->show();
        ui->spinBox_9->show();
        ui->horizontalSlider->show();
        ui->horizontalSlider_2->show();
        ui->horizontalSlider_3->show();
        ui->horizontalSlider_5->show();
        ui->horizontalSlider_6->show();
        ui->horizontalSlider_7->show();
        ui->label_11->setText("Midterm 1");
        ui->label_12->setText("Midterm 2");
    }
    if (arg1 == "PIC 10C")
    {
        //Reset settings
        ui->label_15->setText("0");
        ui->spinBox->setValue(0);
        ui->spinBox_2->setValue(0);
        ui->spinBox_3->setValue(0);
        ui->spinBox_10->setValue(0);
        ui->spinBox_11->setValue(0);
        ui->spinBox_12->setValue(0);

        ui->label_4->hide();
        ui->label_5->hide();
        ui->label_6->hide();
        ui->label_7->hide();
        ui->label_8->hide();
        ui->label_9->hide();
        ui->spinBox_4->hide();
        ui->spinBox_5->hide();
        ui->spinBox_6->hide();
        ui->spinBox_7->hide();
        ui->spinBox_8->hide();
        ui->spinBox_9->hide();
        ui->horizontalSlider->hide();
        ui->horizontalSlider_2->hide();
        ui->horizontalSlider_3->hide();
        ui->horizontalSlider_5->hide();
        ui->horizontalSlider_6->hide();
        ui->horizontalSlider_7->hide();
        ui->label_11->setText("Final Project");
        ui->label_12->setText("Midterm");
    }
}


void MainWindow::on_pushButton_clicked()
{
    //If PIC10B
    if (ui->comboBox->currentText() == "PIC 10B")
    {
        //Calculate
        double hw1 = ui->spinBox->text().toDouble();
        double hw2 = ui->spinBox_2->text().toDouble();
        double hw3 = ui->spinBox_3->text().toDouble();
        double hw4 = ui->spinBox_4->text().toDouble();
        double hw5 = ui->spinBox_5->text().toDouble();
        double hw6 = ui->spinBox_6->text().toDouble();
        double hw7 = ui->spinBox_7->text().toDouble();
        double hw8 = ui->spinBox_8->text().toDouble();
        double hw9 = ui->spinBox_9->text().toDouble();
        double mt1 = ui->spinBox_10->text().toDouble();
        double mt2 = ui->spinBox_11->text().toDouble();
        double f = ui->spinBox_12->text().toDouble();

        double hwAverage = (hw1+hw2+hw3+hw4+hw5+hw6+hw7+hw8+hw9)/9;
        if (ui->radioButton->isChecked())
        {
            double schemaAscore = (hwAverage*0.25 + mt1*0.2 + mt2*0.2 + f*0.35);
            schemaAscore = (double)((int)(schemaAscore*100))/100;
            ui->label_15->setText(QString::number(schemaAscore));
        }
        else
        {
            double mtMax = mt1;
            if (mt2>mt1)
                mtMax = mt2;
            double schemaBscore = (hwAverage*0.25 + mtMax*0.3 + f*0.44);
            schemaBscore = (double)((int)(schemaBscore*100))/100;
            ui->label_15->setText(QString::number(schemaBscore));
        }

    }
    //If PIC10C
    if (ui->comboBox->currentText() == "PIC 10C")
    {
        //Calculate values
        double hw1 = ui->spinBox->text().toDouble();
        double hw2 = ui->spinBox_2->text().toDouble();
        double hw3 = ui->spinBox_3->text().toDouble();
        double proj = ui->spinBox_10->text().toDouble();
        double mt = ui->spinBox_11->text().toDouble();
        double f = ui->spinBox_12->text().toDouble();

        double hwAverage = (hw1+hw2+hw3)/3;
        if (ui->radioButton->isChecked())
        {
            double schemaAscore = (hwAverage*0.15 + proj*0.35 + mt*0.25 + f*0.30);
            schemaAscore = (double)((int)(schemaAscore*100))/100;
            ui->label_15->setText(QString::number(schemaAscore));
        }
        else
        {
            double schemaBscore = (hwAverage*0.15 + proj*0.35 + f*0.50);
            schemaBscore = (double)((int)(schemaBscore*100))/100;
            ui->label_15->setText(QString::number(schemaBscore));
        }
    }
}
