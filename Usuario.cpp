#include "Usuario.h"
#include <iostream>
#include <string>

using namespace std;
Usuario::Usuario()
{
	codigo = nombre = apellido = correo = password = "UNDEFINED";
	permisos = telefono = documento = codigo_programa = 0;
}

Usuario::Usuario(
	string new_codigo,
	int new_programa,
	long new_documento,
	string new_apellido,
	string new_nombre)
{
	codigo = new_codigo;
	codigo_programa = new_programa;
	documento = new_documento;
	apellido = new_apellido;
	nombre = new_nombre;
}

Usuario::~Usuario()
{
}

void Usuario::setCodigo()
{
	codigo = to_string(documento) + "-" + to_string(codigo_programa);
}

void Usuario::setCodigoPrograma(int new_codigo)
{
	codigo_programa = new_codigo;
}

void Usuario::setPermisos(int new_permisos)
{
	permisos = new_permisos;
}

void Usuario::setDocumento(long new_documento)
{
	documento = new_documento;
}

void Usuario::setNombre(string new_nombre)
{
	nombre = new_nombre;
}

void Usuario::setApellido(string new_apellido)
{
	apellido = new_apellido;
}

void Usuario::setCorreo(string new_correo)
{
	correo = new_correo;
}

void Usuario::setTelefono(long new_telefono)
{
	telefono = new_telefono;
}

void Usuario::setPassword(string new_password)
{
	password = new_password;
}

string Usuario::getCodigo()
{
	return codigo;
}

int Usuario::getCodigoPrograma()
{
	return codigo_programa;
}

int Usuario::getPermisos()
{
	return permisos;
}

long Usuario::getDocumento()
{
	return documento;
}

string Usuario::getNombre()
{
	return nombre;
}

string Usuario::getApellido()
{
	return apellido;
}

string Usuario::getCorreo()
{
	return correo;
}

long Usuario::getTelefono()
{
	return telefono;
}

string Usuario::getPassword()
{
	return password;
}
