#include "stringlistew.h"
#include "ui_stringlistew.h"
#include <QDebug>

StringListeW::StringListeW(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StringListeW)
{
    ui->setupUi(this);

    listModel = new QStringListModel(this);
    listModel->setStringList(strList);
    ui->listView->setModel(listModel);
}



StringListeW::~StringListeW()
{
    delete ui;
}

void StringListeW::setList(const QStringList &liste)
{
    qDebug() << "set list";
    qDebug() << strList.size();
    for(int i = liste.size() - 1; i >= 0; i--) {
        int row = strList.size();
        listModel->insertRow(row);
        listModel->setData(listModel->index(row), liste.value(i));
    }
    qDebug() << strList.size();
}

void StringListeW::insertRow(QString str)
{
    int row = listModel->rowCount();
    listModel->insertRow(row);
    listModel->setData(listModel->index(row),
                       str);
}

void StringListeW::on_pushButton_clicked()
{
    if(!ui->lineEdit->text().isEmpty()) {
        insertRow(ui->lineEdit->text());
    }
}

void StringListeW::on_pushButton_3_clicked()
{
    if(!ui->lineEdit->text().isEmpty()) {
        emit newGlobalRow(ui->lineEdit->text());
    }
}

void StringListeW::on_pushButton_2_clicked()
{
    if(!ui->lineEdit->text().isEmpty()) {
        QString s = ui->lineEdit->text();
        insertRow(s);
        emit newGlobalRow(s);
    }
}
