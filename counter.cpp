#include "counter.h"
#include "qdebug.h"

Counter::Counter(QObject *parent)
    : QObject{parent}
{
    qDebug("This is called?");

    this->m_value = 0;
}

void Counter::setValue(int value)
{
    qDebug() << "Setting Value" + QString::number(m_value) + "to" +  QString::number(value);

    if (value != m_value) {
        m_value = value;
        emit labelChanged("Count: " + QString::number(m_value));
    }
}

void Counter::increment()
{
    qDebug() << "Incrementing";
    this->setValue(this->m_value + 1);
}

