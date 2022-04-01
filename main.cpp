/*
Alta de usuario
Inscripción a las asignaturas
Inicio de clase
Asignación de docentes a una asignatura
*/
#include "Usuario.h"
#include "Docente.h"
#include "Estudiante.h"
#include "DtUsuario.h"
#include "DtDocente.h"
#include "DtEstudiante.h"
#include <iostream>
using namespace std;

int main(){
     DtEstudiante * estudiante = new DtEstudiante("Aldrin", "http:\\foto.png", "aldrineluno@gmail.com", "123456", "425487");
     DtDocente * docente = new DtDocente("Adriana", "http:\\perfil.png", "aldrianalamejor@gmail.com", "789456", "Elbio Fernandez");

     cout << *estudiante << endl;
     cout << *docente << endl;
}
