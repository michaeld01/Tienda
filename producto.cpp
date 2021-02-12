#include "producto.h"

Producto::Producto(QObject *parent) : QObject(parent)
{

}

Producto::Producto(int codigo, QString nombre, float precio)
{
    m_codigo = codigo;
    m_nombre = nombre;
    m_precio = precio;
}

int Producto::codigo() const
{
    return m_codigo;
}

float Producto::precio() const
{
    return m_precio;
}

QString Producto::nombre() const
{
    return m_nombre;
}
