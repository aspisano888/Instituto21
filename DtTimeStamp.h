#ifndef DTTIMESTAMP
#define DTTIMESTAMP
#include "DtFecha.h"

#include<iostream>

using namespace std;

class DtTimeStamp{
	private:
        DtFecha fecha;
		int hora;
		int minuto;
		int segundo;
	public:
		DtTimeStamp();
		DtTimeStamp(DtFecha,int,int,int);
        void setFecha(DtFecha);
        void setHora(int);
        void setMinuto(int);
        void setSegundo(int);
		DtFecha getFecha();
		int getHora();
		int getMinuto();
        int getSegundo();
		~DtTimeStamp();
};
#endif