#include "DilemaGui.h"
#include "ui_DilemaGui.h"

#include <QDebug>

DilemaGui::DilemaGui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DilemaGui)
{
    ui->setupUi(this);

    m_dilemaFactory = new DilemaFactory;

    fillComboboxes();
}

DilemaGui::~DilemaGui()
{
    delete ui;
}

void DilemaGui::fillComboboxes()
{
    ui->comboBoxPlayer1->addItems(*(m_dilemaFactory->typeList()));
    ui->comboBoxPlayer2->addItems(*(m_dilemaFactory->typeList()));
}

void DilemaGui::printResult()
{
    printResult(ui->comboBoxPlayer1->currentIndex(), ui->comboBoxPlayer2->currentIndex(), ui->spinBoxNumberOfGames->value());
}

void DilemaGui::printResult(int player1Ix, int player2Ix, int numberOfGames)
{
    ui->textEditScoreList->clear();

    auto history1 = m_dilemaFactory->history(player1Ix),
         history2 = m_dilemaFactory->history(player2Ix);
    int lenght1 = history1.length(),
        lenght2 = history2.length();

    QString toPrint1 = "",
            toPrint2 = "";
    for(int i = 0; i < numberOfGames; i++) {
        toPrint1 += QString::number(history1.at(lenght1 - numberOfGames + i)) + " ";
        toPrint2 += QString::number(history2.at(lenght2 - numberOfGames + i)) + " ";
    }

    ui->textEditScoreList->append(toPrint1 + "\tbalance: " + QString::number(m_dilemaFactory->balance(player1Ix)));
    ui->textEditScoreList->append(toPrint2 + "\tbalance: " + QString::number(m_dilemaFactory->balance(player2Ix)));
}

void DilemaGui::on_pushButtonPlay_clicked()
{
    m_dilemaFactory->playSeries(ui->comboBoxPlayer1->currentIndex(), ui->comboBoxPlayer2->currentIndex(),
                                ui->spinBoxNumberOfGames->value());
    printResult();
}
