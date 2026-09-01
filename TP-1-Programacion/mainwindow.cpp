#include "mainwindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow )
{
    ui->setupUi(this);

    movimientos={
        "Paciente añadido",
        "Pacientes en espera",
        "Próximo paciente a ser atendido",
        "Paciente en consulta",
        "Pacientes atendidos"

    };

    /*reservo memoria para ventanas secundarias*/
    uiWinIngresoPacientes=new IngresoPacientes(nullptr);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setUserLogin(QString usuario)
{

}

 void MainWindow::addMovimientos(QString msj){

     ui->listMovimientos_1->addItem(msj);
     ui->listMovimientos_1->scrollToBottom();
}

 void MainWindow::on_btnEspera_clicked(){

 }

 void MainWindow::on_btnSiguiente_clicked(){

 }
 void MainWindow::on_btnAtender_clicked(){

 }
 void MainWindow::on_btnAtendidos_clicked(){

 }

void MainWindow::on_btnAnadir_clicked()
{
    //Creacion de la lista para QComboBox
    uiWinIngresoPacientes->setListgenero({"Femenino", "Masculino", "No binario", "No responde"});

    if(uiWinIngresoPacientes->exec() == QDialog::Accepted){
        addMovimientos(movimientos[0]);
     }
}