#include "DtTeorico.h"
#include "DtTimeStamp.h"

    DtTeorico::DtTeorico(){}
    DtTeorico::DtTeorico(int id,string nombre,DtTimeStamp inicio,string ruta,int cantAsist):DtClase(id,nombre,inicio,ruta){
        this->cantAsist=cantAsist;
    }
    void DtTeorico::setCantAsist(int){
        this->cantAsist=cantAsist;
    }
    int DtTeorico::getCantAsist(){
        return this->cantAsist;
    }
    DtTeorico::~DtTeorico(){}