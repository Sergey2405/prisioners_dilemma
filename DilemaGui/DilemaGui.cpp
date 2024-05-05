#include "DilemaGui.h"
#include "ui_DilemaGui.h"

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
//    ui->comboBox  ->addItems(*m_dilemaFactory->typeList());
//    ui->comboBox_2->addItems(*m_dilemaFactory->typeList());
}
