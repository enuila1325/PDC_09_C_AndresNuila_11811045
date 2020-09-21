#include "funciones_acceso_aleatorio.cpp"
using namespace std;

int main()
{
    Acceso ac;
    fstream fcont0("contactos.dat", ios::out);
    fcont0.close();
    fstream fcont("contactos.dat", ios::in | ios::out | ios::binary);
    ac.escribir_o_leer(fcont, true);
    cout << "ANTES:" << endl;
    ac.escribir_o_leer(fcont, false);
    cout << endl
         << "CAMBIOS:" << endl;
    ac.cambios(fcont);
    cout << endl
         << "DESPUES:" << endl;
    ac.escribir_o_leer(fcont, false);
}