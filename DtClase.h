#ifndef DTCLASE
#define DTCLASE
#include "DtTimeStamp.h"

using namespace std;

class DtClase{
    private:
        int id;
        string nombre;
        DtTimeStamp inicio;
        string ruta;
    public:
        DtClase();
        DtClase(int,string,DtTimeStamp,string);
        int getId();
        string getNombre();
        DtTimeStamp getInicio();
        string getRutaVideo();
        virtual ~DtClase();
};
#endif