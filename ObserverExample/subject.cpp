#include "iobserver.h"
#include "subject.h"


Subject::Subject()
{

}

void Subject::notify(QString category)
{
    foreach (IObserver *observer, m_observers.value(category))
    {
        observer->update(this);
    }
}

void Subject::attach(IObserver *observer, QString category)
{
    if (!m_observers.contains(category))
        m_observers.insert(category, QList<IObserver *>());
    m_observers[category].append(observer);
}

void Subject::dettach(IObserver *observer, QString category)
{
    if (m_observers.contains(category))
        m_observers[category].removeOne(observer);
}
