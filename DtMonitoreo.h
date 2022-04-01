#ifndef DTMONITOREO
#define DTMONITOREO
#include "DtClase.h"
#include "DtTimeStamp.h"

class DtMonitoreo: public DtClase{
    private:
        int habilitados;
    public:
        DtMonitoreo();
        DtMonitoreo(int,string,DtTimeStamp,string,int);
        void setHabilitados(int);
        int getHabilitados();
        ~DtMonitoreo();
};
#endif