#include "counter.h"

Counter::Counter(QObject *parent)
    : QObject{parent}
{

    this->m_value = 0;
}

void Counter::setValue(int value)
{

    if (value != m_value) {
        m_value = value;
        emit labelChanged("Count: " + QString::number(m_value));
    }
}

void Counter::increment()
{
    this->setValue(this->m_value + 1);
}

