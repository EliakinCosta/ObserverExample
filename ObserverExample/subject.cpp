#include "iobserver.h"
#include "subject.h"


Subject::Subject()
{

}

void Subject::notify(QString category)
{
    if (category.isEmpty())
        category = "uncategorized";

    foreach (IObserver *observer, m_observers.values(category))
    {
        observer->update(this);
    }
}

void Subject::attach(IObserver *observer, QString category)
{
    if (category.isEmpty())
        category = "uncategorized";
    m_observers.insert(category, observer);
}

void Subject::dettach(IObserver *observer, QString category)
{
    if (category.isEmpty())
        category = "uncategorized";
    m_observers.remove(category, observer);
}
