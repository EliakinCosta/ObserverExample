#ifndef OBSERVER_H
#define OBSERVER_H

class Subject;

class IObserver
{
public:
    IObserver() {}
    virtual ~IObserver(){}
    virtual void update(Subject *subject) = 0;
};

#endif // OBSERVER_H
