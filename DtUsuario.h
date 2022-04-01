#ifndef DTUSUARIO_H
#define DTUSUARIO_H
#include <iostream>
using namespace std;

class DtUsuario{
private:
    string nombre;
    string imagenUrl;
    string email;
    string password;
public:
    DtUsuario();
    DtUsuario(string, string, string, string);

    string getNombre();
    string getImagenUrl();
    string getEmail();
    string getPassword();

    virtual ~DtUsuario();
    friend ostream & operator <<(ostream &, const DtUsuario &);

};

#endif