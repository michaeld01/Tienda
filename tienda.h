#ifndef TIENDA_H
#define TIENDA_H

#include <QMainWindow>

#include "producto.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Tienda; }
QT_END_NAMESPACE

class Tienda : public QMainWindow
{
    Q_OBJECT

public:
    Tienda(QWidget *parent = nullptr);
    ~Tienda();

public slots:
    void mostrarPrecio(int indice);

private slots:
    void on_cmdAgregar_clicked();
    void on_cmdFinalizar_clicked();
    void on_inCedula_editingFinished();

private:
    Ui::Tienda *ui;
    QList<Producto*> m_productos;
    float m_subtotal;

    const float IVA = 0.12;

    void cargarDatos();
    void inicilizarWidgets();
    void calcular(float subtotal);
    void validarCedula();

};
#endif // TIENDA_H
