#include "DtClase.h"
#include "DtTimeStamp.h"

    DtClase::DtClase(){}
    DtClase::DtClase(int,string,DtTimeStamp,string){
        this->id=id;
        this->nombre=nombre;
        this->inicio=inicio;
        this->ruta=ruta;
    }
    int DtClase::getId(){
        return this->id;
    }
    string DtClase::getNombre(){
        return this->nombre;
    }
    DtTimeStamp DtClase::getInicio(){
        return this->inicio;
    }
    string DtClase::getRutaVideo(){
        return this->ruta;
    }
    DtClase::~DtClase(){}