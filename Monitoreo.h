#ifndef MONITOREO
#define MONITOREO
#include "Clase.h"
#include "DtTimeStamp.h"

class Monitoreo: public Clase{
    private:
        int habilitados;
    public:
        Monitoreo();
        Monitoreo(int,string,DtTimeStamp,string,int);
        void setHabilitados(int);
        int getHabilitados();
        ~Monitoreo();
};
#endif