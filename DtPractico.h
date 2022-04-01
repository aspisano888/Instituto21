#ifndef DTPRACTICO
#define DTPRACTICO
#include "DtClase.h"
#include "DtTimeStamp.h"

class DtPractico: public DtClase{
    public:
        DtPractico();
        DtPractico(int,string,DtTimeStamp,string);
        ~DtPractico();
};
#endif