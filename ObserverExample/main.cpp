#include <QCoreApplication>

#include "iobserver.h"
#include "displayobserver.h"
#include "eleicaosubject.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    IObserver *observer1 = new DisplayObserver;
    IObserver *observer2 = new DisplayObserver;
    EleicaoSubject *subject = new EleicaoSubject;

    subject->attach(observer1);
    subject->attach(observer2);

    subject->registrarVoto();

    subject->dettach(observer1);

    subject->registrarVoto();

    return 0;
}

