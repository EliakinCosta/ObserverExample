#ifndef DISPLAYOBSERVER_H
#define DISPLAYOBSERVER_H

#include "iobserver.h"

class DisplayObserver : public IObserver
{
public:
    DisplayObserver();
    virtual ~DisplayObserver(){}
    virtual void update(Subject *subject);
};

#endif // DISPLAYOBSERVER_H
