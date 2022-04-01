#ifndef DTTEORICO
#define DTTEORICO
#include "DtClase.h"
#include "DtTimeStamp.h"

class DtTeorico: public DtClase{
    private:
        int cantAsist;
    public:
        DtTeorico();
        DtTeorico(int,string,DtTimeStamp,string,int);
        void setCantAsist(int);
        int getCantAsist();
        ~DtTeorico();
};
#endif