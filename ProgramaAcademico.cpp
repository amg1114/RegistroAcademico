#include "ProgramaAcademico.h"
#include <iostream>
using namespace std;
ProgramaAcademico::ProgramaAcademico()
{
    codigo = 0;
    nombre = descripcion = "UNDEFINED";
}

ProgramaAcademico::~ProgramaAcademico()
{
    //dtor
}

void ProgramaAcademico::setCodigo(int newCodigo)
{
    codigo = newCodigo;
}
void ProgramaAcademico::setNombre(string newNombre)
{
    nombre = newNombre;
}
void ProgramaAcademico::setDescripcion(string newDescripcion)
{
    descripcion = newDescripcion;
}

int ProgramaAcademico::getCodigo()
{
    return codigo;
}
string ProgramaAcademico::getNombre()
{
    return nombre;
}
string ProgramaAcademico::getDescripcion()
{
    return descripcion;
}
