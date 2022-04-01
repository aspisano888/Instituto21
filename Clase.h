#ifndef CLASE
#define CLASE
#include "DtTimeStamp.h"

using namespace std;

class Clase{
    private:
        int id;
        string nombre;
        DtTimeStamp inicio;
        string ruta;
    public:
        Clase();
        Clase(int,string,DtTimeStamp,string);
        void setId(int);
        void setNombre(string);
        void setInicio(DtTimeStamp);
        void setRutaVideo(string);
        int getId();
        string getNombre();
        DtTimeStamp getInicio();
        string getRutaVideo();
        ~Clase();
};
#endif