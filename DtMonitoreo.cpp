#include "DtMonitoreo.h"
#include "DtTimeStamp.h"    
    DtMonitoreo::DtMonitoreo(){}
    DtMonitoreo::DtMonitoreo(int id,string nombre,DtTimeStamp inicio,string ruta,int habilitados):DtClase(id,nombre,inicio,ruta){
        this->habilitados;
    }
    void DtMonitoreo::setHabilitados(int habilitados){
        this->habilitados=habilitados;
    }
    int DtMonitoreo::getHabilitados(){
        return this->habilitados;
    }
    DtMonitoreo::~DtMonitoreo(){}