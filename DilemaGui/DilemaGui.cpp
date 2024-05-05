#include "DilemaGui.h"
#include "ui_DilemaGui.h"

DilemaGui::DilemaGui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DilemaGui)
{
    ui->setupUi(this);
}

DilemaGui::~DilemaGui()
{
    delete ui;
}
