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

    subject->attach(observer1, "Teste");
    subject->attach(observer2, "Teste");

    subject->attach(observer2);

    subject->registrarVoto();
    subject->registrarVoto("Teste");
//    A quantidade de votos agora e:  1
//    A quantidade de votos agora e:  2
//    A quantidade de votos agora e:  2

    return 0;
}

