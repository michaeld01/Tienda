#ifndef ACERCA_H
#define ACERCA_H

#include <QDialog>

namespace Ui {
class Acerca;
}

class Acerca : public QDialog
{
    Q_OBJECT
    Q_PROPERTY(QString dato READ dato WRITE setDato)

public:
    explicit Acerca(QWidget *parent = nullptr);
    ~Acerca();

    QString dato() const;
    void setDato(const QString &dato);

    void actualizar();

private:
    Ui::Acerca *ui;
    QString m_dato;
};

#endif // ACERCA_H
