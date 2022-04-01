#include "DtTimeStamp.h"
#include "DtFecha.h"

    DtTimeStamp::DtTimeStamp(){}
    DtTimeStamp::DtTimeStamp(DtFecha fecha,int hora,int minuto,int segundo){
        this->fecha=fecha;
        this->hora=hora;
        this->minuto=minuto;
        this->segundo=segundo;
    }
    void DtTimeStamp::setFecha(DtFecha){
        this->fecha=fecha;
    }
    void DtTimeStamp::setHora(int){
        this->hora=hora;
    }
    void DtTimeStamp::setMinuto(int){
        this->minuto=minuto;
    }
    void DtTimeStamp::setSegundo(int){
        this->segundo=segundo;
    }
    DtFecha DtTimeStamp::getFecha(){
        return this->fecha;
    }
    int DtTimeStamp::getHora(){
        return this->hora;
    }
    int DtTimeStamp::getMinuto(){
        return this->minuto;
    }
    int DtTimeStamp::getSegundo(){
        return this->segundo;
    }
    DtTimeStamp::~DtTimeStamp(){}