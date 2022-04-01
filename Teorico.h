#ifndef TEORICO
#define TEORICO
#include "Clase.h"
#include "DtTimeStamp.h"

class Teorico: public Clase{
    private:
        int cantAsist;
    public:
        Teorico();
        Teorico(int,string,DtTimeStamp,string,int);
        void setCantAsist(int);
        int getCantAsist();
        ~Teorico();
};
#endif