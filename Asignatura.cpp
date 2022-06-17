#include "Asignatura.h"

#include <iostream>
#include <string>
using namespace std;
Asignatura::Asignatura()
{
    codigo = cantCreditos = codigo_programa = codigo_semestre = 0;
    nombre = "UNDEFINED";
}

Asignatura::~Asignatura()
{
    //dtor
}
void Asignatura::setCodigo(int newCodigo)
{
    codigo = newCodigo;
}
void Asignatura::setNombre(string newNombre)
{
    nombre = to_string(codigo) + " - " + newNombre;
}
void Asignatura::setCantCreditos(int cant)
{
    cantCreditos = cant;
}
void Asignatura::setPrograma(int newPrograma)
{
    codigo_programa = newPrograma;
}
void Asignatura::setSemestre(int newSemestre)
{
    codigo_semestre = newSemestre;
}
void Asignatura::setEstudiante(int newEstudiante)
{
    codigo_estudiante = newEstudiante;
}
void Asignatura::setDocente(int newDocente)
{
    codigo_docente = newDocente;
}

int Asignatura::getCodigo()
{
    return codigo;
}
string Asignatura::getNombre()
{
    return nombre;
}
int Asignatura::getCantCreditos()
{
    return cantCreditos;
}
int Asignatura::getPrograma()
{
    return codigo_programa;
}
int Asignatura::getSemestre()
{
    return codigo_semestre;
}
int Asignatura::getEstudiante()
{
    return codigo_estudiante;
}
string Asignatura::getDocente()
{
    return codigo_docente;
}
