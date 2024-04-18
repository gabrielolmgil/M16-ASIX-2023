
#include "Library.h"
#include <iostream>
using namespace std;
int opcion = 0;
string producto;
string lista[10]{};
int num = 0;


namespace Library
{
    int Arithmetic::Opciones()
    {
        cout << "\nOpciones:" << endl;
        cout << "1- Introducir producto" << endl;
        cout << "2- Visualizar lista de la compra" << endl;
        cout << "3- Salir" << endl;

        int opcion;
        cout << "\nElije una de las opciones: ";
        cin >> opcion;
        return opcion;
    }

    void Arithmetic::Agregar()
    {
        bool rep = false;
        int x = 0;
        cout << "Escribe el nombre del producto: ";
        cin >> producto;
        while (x < 10)
        {

            if (producto == lista[x])
            {
                rep = true;
                cout << producto << "\n";
            }
            x++;

        }
        if (!rep)
        {
            lista[num] = producto;
            num = num + 1;
        }
        else
        {
            cout << "Ya has esta en la lista";

        }
    }

    void Arithmetic::MostarLista()
    {
        int num2 = 0;
        cout << "Lista de la compra:\n";
        while (num2 < 10)
        {
            cout << lista[num2] << "\n";
            num2 = num2 + 1;
        }
    }
}