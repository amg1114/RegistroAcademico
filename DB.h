#ifndef DB_H
#pragma once

#include <vector>

#include "Estudiante.h"

using namespace std;
class DB
{
public:
	DB();
	virtual ~DB();

	void guardarEstudiante(Estudiante);
	void importarEstudiantes(vector<Estudiante> &);
};

#endif // !DB_H

