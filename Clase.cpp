#include "Clase.h"
#include "DtTimeStamp.h"

    Clase::Clase(){}
    Clase::Clase(int id,string nombre,DtTimeStamp inicio,string ruta){
        this->id=id;
        this->nombre=nombre;
        this->inicio=inicio;
        this->ruta=ruta;
    }
    void Clase::setId(int id){
        this->id=id;
    }
    void Clase::setNombre(string nombre){
        this->nombre=nombre;
    }
    void Clase::setInicio(DtTimeStamp inicio){
        this->inicio=inicio;
    }
    void Clase::setRutaVideo(string ruta){
        this->ruta=ruta;
    }
    int Clase::getId(){
        return this->id;
    }
    string Clase::getNombre(){
        return this->nombre;
    }
    DtTimeStamp Clase::getInicio(){
        return this->inicio;
    }
    string Clase::getRutaVideo(){
        return this->ruta;
    }

    Clase::~Clase(){}
