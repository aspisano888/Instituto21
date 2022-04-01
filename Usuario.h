#ifndef USUARIO_H
#define USUARIO_H
#include <map>
#include <iostream>
using namespace std;

class Usuario{
private:
  string nombre;
  string imagenUrl;
  string email;
  string password;
public:
  Usuario();
  Usuario(string, string, string, string);

  void setNombre(string);
  void setImagenUrl(string);
  void setEmail(string);
  void setPassword(string);

  string getNombre();
  string getImagenUrl();
  string getEmail();
  string getPassword();

  virtual ~Usuario();
};

#endif