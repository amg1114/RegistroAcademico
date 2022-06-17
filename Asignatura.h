#ifndef ASIGNATURA_H
#define ASIGNATURA_H

#include <iostream>
using namespace std;
class Asignatura
{
public:
	Asignatura();
	Asignatura(string, int, int, string, string, int, string);
	virtual ~Asignatura();

	void setCodigo(int);
	void setCantCreditos(int);
	void setCodigoPrograma(int);
	void setCodigoSemestre(int);
	void setCodigoEstudiante(int);
	void setCodigoDocente(int);
	void setNombre(string);

	string getCodigo();
	int getCodigoPrograma();
	int getCodigoSemestre();
	int getCantCreditos();
	string getCodigoEstudiante();
	string getCodigoDocente();
	string getNombre();
protected:
	string codigo;
	int codigo_programa;
	int codigo_semestre;
	string codigo_estudiante;
	string codigo_docente;
	int cantCreditos;
	string nombre;
private:

};

#endif // ASIGNATURA_H
