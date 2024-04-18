#include <iostream>
#include "Library.h"
using namespace std;
int main()
{
    int opcion = 0;
    string producto;
    string lista[10]{};
    int num = 0;
    int num2 = 0;
    while (opcion != 3)
    {
        opcion = Library::Arithmetic::Opciones();
        if (opcion == 1)
        { 
            Library::Arithmetic::Agregar();
        }
        else if (opcion == 2)
        {
            Library::Arithmetic::MostarLista();
        }
        else if (opcion == 3)
        {
            break;
        }
        else {
            cout << "No has elegido una de las tres opciones\n";
        }
    }

}