#ifndef ASIGNATURA_H
#define ASIGNATURA_H

#include <iostream>
using namespace std;
class Asignatura
{
public:
	Asignatura();
	virtual ~Asignatura();

	void setCodigo(int);
	void setCantCreditos(int);
	void setPrograma(int);
	void setSemestre(int);
	void setEstudiante(int);
	void setDocente(int);
	void setNombre(string);

	int getCodigo();
	int getPrograma();
	int getSemestre();
	int getCantCreditos();
	int getEstudiante();
	string getDocente();
	string getNombre();
protected:

private:
	int codigo;
	int codigo_programa;
	int codigo_semestre;
	int codigo_estudiante;
	string codigo_docente;
	int cantCreditos;
	string nombre;
};

#endif // ASIGNATURA_H
