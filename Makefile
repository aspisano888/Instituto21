main: Usuario.o Docente.o Estudiante.o DtUsuario.o DtDocente.o DtEstudiante.o main.o
	g++ Usuario.o Docente.o Estudiante.o DtUsuario.o DtDocente.o DtEstudiante.o main.o -o main

main.o: main.cpp

Usuario.o: Usuario.cpp

Docente.o: Docente.cpp

Estudiante.o: Estudiante.cpp

DtUsuario.o: DtUsuario.cpp

DtDocente.o: DtDocente.cpp

DtEstudiante.o: DtEstudiante.cpp

clean:
	rm -f *.o
	rm -f main
