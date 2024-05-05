#ifndef DILEMAGUI_H
#define DILEMAGUI_H

#include <QWidget>

namespace Ui {
class DilemaGui;
}

class DilemaGui : public QWidget
{
    Q_OBJECT

public:
    explicit DilemaGui(QWidget *parent = nullptr);
    ~DilemaGui();

private:
    Ui::DilemaGui *ui;
};

#endif // DILEMAGUI_H
