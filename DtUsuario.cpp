#include "DtUsuario.h"

DtUsuario::DtUsuario(){}
DtUsuario::DtUsuario(string nombre, string imagenUrl, string email, string password){
    this->nombre = nombre;
    this->imagenUrl = imagenUrl;
    this-> email = email;
    this->password = password;
}
string DtUsuario::getNombre(){
    return this->nombre;
}
string DtUsuario::getImagenUrl(){
    return  this->imagenUrl;
}
string DtUsuario::getEmail(){
    return  this->email;
}
string DtUsuario::getPassword(){
    return  this->password;
}

DtUsuario::~DtUsuario(){}

ostream & operator << (ostream & salida, const DtUsuario & user){
    cout << "Nombre: " << user.nombre << "\nImagen Url: " << user.imagenUrl << "\nEmail: " << user.email << "\nPassword: " << user.password << endl;
    return salida;
}