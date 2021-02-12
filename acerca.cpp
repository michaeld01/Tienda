#include "acerca.h"
#include "ui_acerca.h"

Acerca::Acerca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Acerca)
{
    ui->setupUi(this);
}

Acerca::~Acerca()
{
    delete ui;
}

QString Acerca::dato() const
{
    return m_dato;
}

void Acerca::setDato(const QString &dato)
{
    m_dato = dato;
}

void Acerca::actualizar()
{
    ui->outTexto->setText(m_dato);
}
