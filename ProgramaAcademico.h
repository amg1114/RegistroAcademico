#ifndef PROGRAMAACADEMICO_H
#define PROGRAMAACADEMICO_H

#include <iostream>
using namespace std;
class ProgramaAcademico
{
public:
	ProgramaAcademico();
	virtual ~ProgramaAcademico();

	void setCodigo(int);
	void setNombre(string);
	void setDescripcion(string);

	int getCodigo();
	string getNombre();
	string getDescripcion();
protected:

private:
	int codigo;
	string nombre;
	string descripcion;
};

#endif // PROGRAMAACADEMICO_H
