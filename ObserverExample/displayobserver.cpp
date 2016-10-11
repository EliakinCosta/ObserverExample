#include "displayobserver.h"
#include "eleicaosubject.h"
#include "subject.h"

#include <QDebug>

DisplayObserver::DisplayObserver()
{

}

void DisplayObserver::update(Subject *subject)
{
    EleicaoSubject *eleicaoSubject = static_cast<EleicaoSubject *>(subject);

    qDebug() << "A quantidade de votos agora e: " << eleicaoSubject->quantidadeVotos();
}
