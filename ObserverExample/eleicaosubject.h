#ifndef ELEICAOSUBJECT_H
#define ELEICAOSUBJECT_H

#include "subject.h"

class EleicaoSubject : public Subject
{
public:
    EleicaoSubject();
    virtual ~EleicaoSubject(){}
    void registrarVoto();
    int quantidadeVotos();
private:
    int m_quantidadeVotos;
};

#endif // ELEICAOSUBJECT_H
