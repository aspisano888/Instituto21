#include "Teorico.h"
#include "DtTimeStamp.h"

    Teorico::Teorico(){}
    Teorico::Teorico(int id,string nombre,DtTimeStamp inicio,string ruta,int cantAsist):Clase(id,nombre,inicio,ruta){
        this->cantAsist=cantAsist;
    }
    void Teorico::setCantAsist(int){
        this->cantAsist=cantAsist;
    }
    int Teorico::getCantAsist(){
        return this->cantAsist;
    }
    Teorico::~Teorico(){}