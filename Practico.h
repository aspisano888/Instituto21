#ifndef PRACTICO
#define PRACTICO
#include "Clase.h"
#include "DtTimeStamp.h"

class Practico: public Clase{
    public:
        Practico();
        Practico(int,string,DtTimeStamp,string);
        ~Practico();
};
#endif