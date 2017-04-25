#ifndef STRINGLISTEW_H
#define STRINGLISTEW_H

#include <QWidget>
#include <QStringList>
#include <QStringListModel>

namespace Ui {
class StringListeW;
}

class StringListeW : public QWidget
{
    Q_OBJECT

    QStringList strList;
    QStringListModel *listModel;

public:
    explicit StringListeW(QWidget *parent = 0);
    void setList(const QStringList &liste);
    ~StringListeW();

    void insertRow(QString str);

signals:
    void newGlobalRow(QString str);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::StringListeW *ui;
};

#endif // STRINGLISTEW_H
