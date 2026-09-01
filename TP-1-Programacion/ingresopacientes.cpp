#include "ingresopacientes.h"
#include "ui_ingresopacientes.h"

IngresoPacientes::IngresoPacientes(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::IngresoPacientes)
{
    ui->setupUi(this);
}

IngresoPacientes::~IngresoPacientes()
{
    delete ui;
}

void IngresoPacientes::on_btnAceptarG_clicked()
{
    accept();
}

void IngresoPacientes::setListgenero(QStringList list){
    ui->cboxGenero->clear();
    ui->cboxGenero->addItems(list);
}

