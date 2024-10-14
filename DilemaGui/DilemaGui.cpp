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

void DilemaGui::on_pushButtonPlay_clicked()
{
    m_dilemaFactory->playSeries(ui->comboBoxPlayer1->currentIndex(), ui->comboBoxPlayer2->currentIndex(),
                                ui->spinBoxNumberOfGames->value());
}
