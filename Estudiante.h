#ifndef ESTUDIANTE_H
#pragma once
#include "Usuario.h"
class Estudiante :
    public Usuario
{
public:
    Estudiante();
    Estudiante(string, int, long, string, string);
    virtual ~Estudiante();

    void setCodigoSemestre(int);
    int getCodigoSemestre();
protected:
    int codigo_semestre;
};
#endif // !ESTUDIANTE_H


