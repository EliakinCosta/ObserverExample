#include "eleicaosubject.h"

EleicaoSubject::EleicaoSubject():m_quantidadeVotos(0)
{

}

void EleicaoSubject::registrarVoto()
{
    m_quantidadeVotos++;
    notify();
}

int EleicaoSubject::quantidadeVotos()
{
    return m_quantidadeVotos;
}

