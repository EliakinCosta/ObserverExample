#ifndef ELEICAOSUBJECT_H
#define ELEICAOSUBJECT_H

#include "subject.h"

class QString;

class EleicaoSubject : public Subject
{
public:
    EleicaoSubject();
    virtual ~EleicaoSubject(){}
    void registrarVoto(QString category="");
    int quantidadeVotos();
private:
    int m_quantidadeVotos;
};

#endif // ELEICAOSUBJECT_H
