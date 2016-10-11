#include "iobserver.h"
#include "subject.h"


Subject::Subject()
{

}

void Subject::notify()
{
    foreach (IObserver *observer, m_observers)
    {
        observer->update(this);
    }
}

void Subject::attach(IObserver *observer)
{
    m_observers.append(observer);
}

void Subject::dettach(IObserver *observer)
{
    m_observers.removeOne(observer);
}
