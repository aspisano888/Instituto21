#include "Usuario.h"

Usuario::Usuario(){}
Usuario::Usuario(string nombre, string imagenUrl, string email, string password){
  this->nombre = nombre;
  this->imagenUrl = imagenUrl;
  this-> email = email;
  this->password = password;
}

void Usuario::setNombre(string nombre){
  this->nombre = nombre;
}
void Usuario::setImagenUrl(string imagenUrl){
  this->imagenUrl = imagenUrl;
}
void Usuario::setEmail(string email){
  this->email = email;
}
void Usuario::setPassword(string password){
  this->password = password;
}

string Usuario::getNombre(){
  return  this->nombre;
}
string Usuario::getImagenUrl(){
  return  this->imagenUrl;
}
string Usuario::getEmail(){
  return  this->email;
}
string Usuario::getPassword(){
  return  this->password;
}

Usuario::~Usuario(){}