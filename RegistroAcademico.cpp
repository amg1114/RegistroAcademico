#include <iostream>
#include <vector>

#include "DB.h"
#include "ProgramaAcademico.h"
#include "Semestre.h"
#include "Asignatura.h"
#include "Estudiante.h"
#include "Docente.h"

using namespace std;

DB data_base;

vector <Asignatura> pensum_carreras;
vector <Asignatura> lista_asignaturas;
vector <Estudiante> lista_estudiantes;
vector <Docente> lista_docenetes;

/* --------- Defincion de Prototipos de Funcion --------- */
void crearEstudiante();
void imprimirEstudiantes();

/* --------- Implementacion de Funciones --------- */
void crearEstudiante()
{
	Estudiante new_estudiante;

	new_estudiante.setDocumento(100000000);
	new_estudiante.setCodigoPrograma(1);
	new_estudiante.setApellido("Prueba");
	new_estudiante.setNombre("Estudiante");
	new_estudiante.setCodigo();

	data_base.guardarEstudiante(new_estudiante);
	data_base.importarEstudiantes(lista_estudiantes);
}

void imprimirEstudiantes()
{
	int tam = lista_estudiantes.size();

	if (!tam) {
		cout << "No se han agregado estudinates aun.";
		return;
	}

	cout << "Imprimir listado de Estudiantes: " << endl;
	for (int i = 0; i < tam; i++) {
		Estudiante estudiante = lista_estudiantes[i];
		cout << "----------- ------------ ------------" << endl << endl;
		cout << "Codigo: " << estudiante.getCodigo() << endl;
		cout << "Apellido: " << estudiante.getApellido() << endl;
		cout << "Nombre: " << estudiante.getNombre() << endl;
	}
}

int main() {
	data_base.importarEstudiantes(lista_estudiantes);
	imprimirEstudiantes();

	Asignatura new_asignatura("100-1", 1, 1, "100000-1", "1006493470-1", 1, "Calculo");
	data_base.guardarAsignatura(new_asignatura, "pensum");
	return 0;
}


