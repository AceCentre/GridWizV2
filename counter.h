#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

class Counter : public QObject
{
    Q_OBJECT
public:
    explicit Counter(QObject *parent = nullptr);
    int value() const { return m_value; }

public slots:
    void setValue(int value);
    void increment();

signals:
    void labelChanged(QString newLabel);

private:
    int m_value;

};

#endif // COUNTER_H








