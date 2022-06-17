#ifndef DB_H
#pragma once

#include <vector>

#include "ProgramaAcademico.h"
#include "Semestre.h"
#include "Asignatura.h"
#include "Estudiante.h"
#include "Docente.h"

using namespace std;
class DB
{
public:
	DB();
	virtual ~DB();

	void guardarEstudiante(Estudiante);
	void importarEstudiantes(vector<Estudiante> &);

	void guardarAsignatura(Asignatura, string);
	void importarAsignaturas(vector<Asignatura>&, string);
};

#endif // !DB_H

