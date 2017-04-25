#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>
#include <QStringListModel>
#include "stringlistew.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QStringList strList;
    QStringListModel *listModel;

    StringListeW *strListeW;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void appendRow(QString str);
};

#endif // MAINWINDOW_H
