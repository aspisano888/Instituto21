#ifndef DTLOG
#define DTLOG
#include "DtTimeStamp.h"

using namespace std;

class DtLog{
    private:
        DtTimeStamp inicio;
        DtTimeStamp fin;
    public:
        DtLog();
        DtLog(DtTimeStamp,DtTimeStamp);
        void setInicio(DtTimeStamp);
        void setFin(DtTimeStamp);
        DtTimeStamp getInicio();
        DtTimeStamp getFin();
        ~DtLog();
};
#endif