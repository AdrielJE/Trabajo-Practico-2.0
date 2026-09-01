#ifndef INGRESOPACIENTES_H
#define INGRESOPACIENTES_H

#include <QDialog>

namespace Ui {
class IngresoPacientes;
}

class IngresoPacientes : public QDialog
{
    Q_OBJECT

public:
    explicit IngresoPacientes(QWidget *parent = nullptr);
    ~IngresoPacientes();

    /* setters */
    void setListgenero(QStringList);

    /* getters */
    QVector<QString> getIngresoPacientes();


private slots:
    void on_btnAceptarG_clicked();

private:
    Ui::IngresoPacientes *ui;
};

#endif // INGRESOPACIENTES_H
