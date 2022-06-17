#include "Semestre.h"
#include <iostream>
using namespace std;
Semestre::Semestre()
{
    codigo = codigo_programa = 0;
}

Semestre::~Semestre()
{
}

void Semestre::setCodigo(int newCodigo) {
    codigo = newCodigo;
}
void Semestre::setCodigoPrograma(int newPrograma) {
    codigo_programa = newPrograma;
}
int Semestre::getCodigo() {
    return codigo;
}
int Semestre::getCodigoPrograma() {
    return codigo_programa;
}
