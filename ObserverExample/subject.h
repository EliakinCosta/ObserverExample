#ifndef SUBJECT_H
#define SUBJECT_H

#include <QList>

class IObserver;

class Subject
{
public:
    virtual ~Subject(){}
    virtual void notify();
    void attach(IObserver *observer);
    void dettach(IObserver *observer);
protected:
    Subject();
private:
    QList<IObserver *> m_observers;
};

#endif // SUBJECT_H
