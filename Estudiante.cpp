#include "Estudiante.h"
#include "Usuario.h"

#include <iostream>
using namespace std;
Estudiante::Estudiante()
{
	codigo_semestre = 0;
}
Estudiante::Estudiante(
	string new_codigo,
	int new_programa,
	long new_documento,
	string new_apellido,
	string new_nombre
) :Usuario(new_codigo, new_programa, new_documento, new_apellido, new_nombre) {

}

Estudiante::~Estudiante()
{
}

void Estudiante::setCodigoSemestre(int newCodigo) {
	codigo_semestre = newCodigo;
}

int Estudiante::getCodigoSemestre() {
	return codigo_semestre;
}
