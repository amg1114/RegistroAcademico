#ifndef SEMESTRE_H
#define SEMESTRE_H

#include <iostream>
using namespace std;
class Semestre
{
public:
	Semestre();
	virtual ~Semestre();

	void setCodigo(int);
	void setCodigoPrograma(int);

	int getCodigo();
	int getCodigoPrograma();
protected:

private:
	int codigo;
	int codigo_programa;
};

#endif // SEMESTRE_H
