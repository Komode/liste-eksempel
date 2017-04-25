#include "stringlistew.h"
#include "ui_stringlistew.h"

StringListeW::StringListeW(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StringListeW)
{
    ui->setupUi(this);
}

StringListeW::~StringListeW()
{
    delete ui;
}
