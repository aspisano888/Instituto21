#include "DtLog.h"
#include "DtTimeStamp.h"

    DtLog::DtLog(){}
    DtLog::DtLog(DtTimeStamp inicio,DtTimeStamp fin){
        this->inicio=inicio;
        this->fin=fin;
    }
    void DtLog::setInicio(DtTimeStamp inicio){
        this->inicio=inicio;
    }
    void DtLog::setFin(DtTimeStamp fin){
        this->fin=fin;
    }
    DtTimeStamp DtLog::getInicio(){
        return this->inicio;
    }
    DtTimeStamp DtLog::getFin(){
        return this->fin;
    }
    DtLog::~DtLog(){}
