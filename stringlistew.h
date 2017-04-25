#ifndef STRINGLISTEW_H
#define STRINGLISTEW_H

#include <QWidget>

namespace Ui {
class StringListeW;
}

class StringListeW : public QWidget
{
    Q_OBJECT

public:
    explicit StringListeW(QWidget *parent = 0);
    ~StringListeW();

private:
    Ui::StringListeW *ui;
};

#endif // STRINGLISTEW_H
