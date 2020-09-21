#include <iostream>
#include <fstream>
#include <cstdlib>
#include "contacto.cpp"
using namespace std;

class Acceso
{
public:
    Acceso();
    ~Acceso();
    void escribir_o_leer(fstream &, bool);
    void escribir_el_3(fstream &, Contacto &);
    void leer_el_3(fstream &, Contacto &);
    void cambios(fstream &);
};