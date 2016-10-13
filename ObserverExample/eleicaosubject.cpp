#include "eleicaosubject.h"

EleicaoSubject::EleicaoSubject():m_quantidadeVotos(0)
{

}

void EleicaoSubject::registrarVoto(QString category)
{
    m_quantidadeVotos++;
    notify(category);
}

int EleicaoSubject::quantidadeVotos()
{
    return m_quantidadeVotos;
}

