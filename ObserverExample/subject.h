#ifndef SUBJECT_H
#define SUBJECT_H

#include <QMap>
#include <QList>

class IObserver;
class QString;

class Subject
{
public:
    virtual ~Subject(){}
    virtual void notify(QString category="");
    void attach(IObserver *observer, QString category="");
    void dettach(IObserver *observer, QString category="");
protected:
    Subject();
private:
    QMap<QString, QList<IObserver *> > m_observers;
};

#endif // SUBJECT_H
