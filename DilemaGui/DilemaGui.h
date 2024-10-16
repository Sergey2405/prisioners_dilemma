#ifndef DILEMAGUI_H
#define DILEMAGUI_H

#include "DilemaFactory.h"

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

    void fillComboboxes();
    void printResult();
    void printResult(int player1Ix, int player2Ix, int numberOfGames);

private slots:
    void on_pushButtonPlay_clicked();

private:
    Ui::DilemaGui *ui;
    DilemaFactory *m_dilemaFactory;
};

#endif // DILEMAGUI_H
