#ifndef USUARIO_H
#define USUARIO_H
#pragma once

#include <iostream>
using namespace::std;
class Usuario
{
public:
	Usuario();
	Usuario(string, int, long, string, string);
	virtual ~Usuario();

	void setCodigo();
	void setCodigoPrograma(int);
	void setPermisos(int);
	void setDocumento(long);
	void setNombre(string);
	void setApellido(string);
	void setCorreo(string);
	void setTelefono(long);
	void setPassword(string);

	string getCodigo();
	int getCodigoPrograma();
	int getPermisos();
	long getDocumento();
	string getNombre();
	string getApellido();
	string getCorreo();
	long getTelefono();
	string getPassword();

protected:
	string codigo;
	int codigo_programa;
	int permisos;
	long documento;
	string nombre;
	string apellido;
	string correo;
	long telefono;
	string password;
private:
};
#endif // !USUARIO_H

