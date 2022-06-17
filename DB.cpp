#include "DB.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

#include "ProgramaAcademico.h"
#include "Semestre.h"
#include "Asignatura.h"
#include "Estudiante.h"
#include "Docente.h"
using namespace std;

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

void DB::importarEstudiantes(vector<Estudiante>& lista_estudiantes)
{
	ifstream archivo("database/estudiantes.csv", ios::in);
	string registro, codigo, programa, documento, apellido, nombre;

	lista_estudiantes.clear();
	while (getline(archivo, registro))
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

void DB::guardarAsignatura(Asignatura new_asignatura, string tabla)
{

	ofstream archivo("database/" + tabla + ".csv", ios::app);
	if (!archivo) {
		cout << "Error al leer el archivo: " << "database/" + tabla + ".csv";
		return;
	}
	archivo
		<< new_asignatura.getCodigo() << ";"
		<< new_asignatura.getCodigoPrograma() << ";"
		<< new_asignatura.getCodigoSemestre() << ";"
		<< new_asignatura.getCodigoDocente() << ";"
		<< new_asignatura.getCodigoEstudiante() << ";"
		<< new_asignatura.getNombre() << ";"
		<< new_asignatura.getCantCreditos() << endl;
	archivo.close();
}

void DB::importarAsignaturas(vector<Asignatura>& lista_asignaturas, string tabla)
{
	ifstream archivo("database/" + tabla + ".csv", ios::in);
	string
		registro,
		codigo,
		cod_programa,
		cod_semestre,
		cod_docente,
		cod_est,
		nombre,
		cantCreditos;

	if (!archivo) {
		cout << "Error al leer el archivo: " << "database/" + tabla + ".csv";
		return;
	}
	lista_asignaturas.clear();

	while (getline(archivo, registro))
	{
		stringstream token(registro);

		getline(token, codigo, ';');
		getline(token, cod_programa, ';');
		getline(token, cod_semestre, ';');
		getline(token, cod_docente, ';');
		getline(token, cod_est, ';');
		getline(token, nombre, ';');
		getline(token, cantCreditos, ';');

		Asignatura new_asignatura(
			codigo,
			stoi(cod_programa),
			stoi(cod_semestre),
			cod_docente, cod_est,
			stoi(cantCreditos),
			nombre
		);

		lista_asignaturas.push_back(new_asignatura);
	}
	archivo.close();
}
