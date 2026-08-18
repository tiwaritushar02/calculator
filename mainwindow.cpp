#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->displayLabel->setText("0");

    connect(ui->pushButton_0, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->pushButton_1, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->pushButton_8, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->pushButton_9, &QPushButton::clicked, this, &MainWindow::numberClicked);

    connect(ui->pushButton_add, &QPushButton::clicked, this, &MainWindow::operatorClicked);
    connect(ui->pushButton_minus, &QPushButton::clicked, this, &MainWindow::operatorClicked);
    connect(ui->pushButton_multiply, &QPushButton::clicked, this, &MainWindow::operatorClicked);
    connect(ui->pushButton_divide, &QPushButton::clicked, this, &MainWindow::operatorClicked);

    connect(ui->pushButton_equalto, &QPushButton::clicked, this, &MainWindow::equalClicked);

    connect(ui->pushButton_AC, &QPushButton::clicked, this, &MainWindow::clearClicked);

    connect(ui->pushButton_decimal, &QPushButton::clicked, this, &MainWindow::decimalClicked);

    connect(ui->pushButton_delete, &QPushButton::clicked, this, &MainWindow::deleteClicked);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClicked(){
    QPushButton *button=qobject_cast<QPushButton *>(sender());
    if(!button)
        return;
    QString number=button->text();
    if(ui->displayLabel->text()=="0" || waitingForSecondNumber){
        ui->displayLabel->setText(number);
        waitingForSecondNumber=false;
    }
    else{
         ui->displayLabel->setText( ui->displayLabel->text()+number);
    }
}
void MainWindow::operatorClicked()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (!button)
        return;
    firstNumber = ui->displayLabel->text().toDouble();
    currentOperator = button->text();
    waitingForSecondNumber = true;
}
void MainWindow::equalClicked()
{
    double secondNumber = ui->displayLabel->text().toDouble();
    double result = 0;
    if (currentOperator == "+"){
        result = firstNumber + secondNumber;
    }
    else if (currentOperator == "-"){
        result = firstNumber - secondNumber;
    }
    else if (currentOperator == "×"){
        result = firstNumber * secondNumber;
    }
    else if (currentOperator == "÷"){
        if (secondNumber == 0){
            ui->displayLabel->setText("Error");
            return;
        }

        result = firstNumber / secondNumber;
    }

    ui->displayLabel->setText(QString::number(result));
    waitingForSecondNumber = true;
}
void MainWindow::clearClicked()
{
    ui->displayLabel->setText("0");

    firstNumber = 0;
    currentOperator = "";
    waitingForSecondNumber = false;
}
void MainWindow::decimalClicked()
{
    QString text = ui->displayLabel->text();

    if (!text.contains("."))
    {
        ui->displayLabel->setText(text + ".");
    }
}
void MainWindow::deleteClicked()
{
    QString text = ui->displayLabel->text();

    if (text.length() > 1)
    {
        text.chop(1);
        ui->displayLabel->setText(text);
    }
    else
    {
        ui->displayLabel->setText("0");
    }
}