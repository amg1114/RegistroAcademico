#include "Asignatura.h"

#include <iostream>
#include <string>

using namespace std;

Asignatura::Asignatura()
{
	codigo_programa = codigo_semestre = 0;
	codigo, codigo_docente, codigo_estudiante, nombre = "UNDEFINED";
}

Asignatura::Asignatura(
	string new_codigo,
	int new_cp,
	int new_cs,
	string new_cd,
	string new_ce,
	int new_cc,
	string new_nombre
)
{
	codigo = new_codigo;
	codigo_programa = new_cp;
	codigo_semestre = new_cs;
	codigo_docente = new_cd;
	codigo_estudiante = new_ce;
	cantCreditos = new_cc;
	nombre = new_nombre;
}

Asignatura::~Asignatura()
{
	//dtor
}
void Asignatura::setCodigo(int new_codigo)
{
	codigo = to_string(codigo_programa) + "-" + to_string(new_codigo);
}
void Asignatura::setNombre(string newNombre)
{
	nombre = to_string(codigo_programa) + " - " + newNombre;
}
void Asignatura::setCantCreditos(int cant)
{
	cantCreditos = cant;
}
void Asignatura::setCodigoPrograma(int newPrograma)
{
	codigo_programa = newPrograma;
}
void Asignatura::setCodigoSemestre(int newSemestre)
{
	codigo_semestre = newSemestre;
}
void Asignatura::setCodigoEstudiante(int newEstudiante)
{
	codigo_estudiante = newEstudiante;
}
void Asignatura::setCodigoDocente(int newDocente)
{
	codigo_docente = newDocente;
}

string Asignatura::getCodigo()
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
int Asignatura::getCodigoPrograma()
{
	return codigo_programa;
}
int Asignatura::getCodigoSemestre()
{
	return codigo_semestre;
}
string Asignatura::getCodigoEstudiante()
{
	return codigo_estudiante;
}
string Asignatura::getCodigoDocente()
{
	return codigo_docente;
}
