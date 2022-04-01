#include "Monitoreo.h"
#include "DtTimeStamp.h"    
    Monitoreo::Monitoreo(){}
    Monitoreo::Monitoreo(int id,string nombre,DtTimeStamp inicio,string ruta,int habilitados):Clase(id,nombre,inicio,ruta){
        this->habilitados;
    }
    void Monitoreo::setHabilitados(int habilitados){
        this->habilitados=habilitados;
    }
    int Monitoreo::getHabilitados(){
        return this->habilitados;
    }
    Monitoreo::~Monitoreo(){}