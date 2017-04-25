#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    strList << "a" << "b" << "c";

    listModel = new QStringListModel(this);
    listModel->setStringList(strList);

    ui->listView->setModel(listModel);

    strListeW = new StringListeW(this);
    strListeW->setWindowFlags(Qt::Window);
    strListeW->show();

    strListeW->setList(strList);

    connect(strListeW, &StringListeW::newGlobalRow,
            this, &MainWindow::appendRow);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::appendRow(QString str)
{
    int row = listModel->rowCount();
    listModel->insertRow(row);
    listModel->setData(listModel->index(row), str);

}
