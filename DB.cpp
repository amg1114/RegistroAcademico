#include "DB.h"

#include <iostream>
#include<fstream>
#include<sstream>
#include <vector>
#include <string>

#include "Estudiante.h"
DB::DB()
{
}

DB::~DB()
{
}

void DB::guardarEstudiante(Estudiante new_estudiante)
{
	ofstream archivo("database/estudiantes.csv", ios::app);
	archivo
		<< new_estudiante.getCodigo() << ";"
		<< new_estudiante.getCodigoPrograma() << ";"
		<< new_estudiante.getDocumento() << ";"
		<< new_estudiante.getApellido() << ";"
		<< new_estudiante.getNombre() << endl;
	archivo.close();
}

void DB::importarEstudiantes(vector<Estudiante> &lista_estudiantes)
{
	ifstream archivo("database/estudiantes.csv", ios::in);
	string registro, codigo, programa, documento, apellido, nombre;

	lista_estudiantes.clear();
	while (getline(archivo,registro))
	{
		stringstream token(registro);

		getline(token, codigo, ';');
		getline(token, programa, ';');
		getline(token, documento, ';');
		getline(token, apellido, ';');
		getline(token, nombre, ';');

		Estudiante new_estudiante(
			codigo,
			stoi(programa),
			atol(documento.c_str()),
			apellido,
			nombre
		);

		lista_estudiantes.push_back(new_estudiante);
	}
	archivo.close();
}
