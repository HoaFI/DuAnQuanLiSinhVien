#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "student.h"
#include <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Student* s = new Student();
    s->setName("Nguyen A");
    s->setDOB("23/2/1990");
    s->setClass("1");

    ui->listWidget->addItem((QListWidgetItem*) s);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    Student* student = (Student*) item;
    ui->label->setText(student->getName());
    ui->label_2->setText(student->getDOB());
    ui->label_3->setText(student->getClass());
}

