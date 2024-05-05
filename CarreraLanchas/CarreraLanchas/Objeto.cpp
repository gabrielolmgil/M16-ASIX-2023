#include <iostream>
using namespace std;
#include "Lanchas.h"
Lancha lancha1 = Lancha();
Lancha lancha2 = Lancha();
int velocidad1 = 0;
int velocidad2 = 0;
int x = 0;
int nitro(){
	int velocidadNitro = 0;
	int opcionNitro = 0;
	while (opcionNitro != 1 && opcionNitro != 2){
				cout << "Quieres utilizar el nitro?\n";
				cout << "1- Si\n";
				cout << "2- No\n";
				cin >> opcionNitro;
				if (opcionNitro == 1)
				{
					int numRand = rand() % 1;
					cout << "Has utilizado el nitro\n";
					lancha1.setNitro();
					x = 1;
					if (numRand == 0)
					{
						velocidadNitro = velocidad1 / 2;
					}
					else
					{
						velocidadNitro = velocidad1 * 2;
					}
					
					
				}
				else if (opcionNitro == 2)
				{
					cout << "No utilizas el nitro \n";
				}
				else
				{
					cout << "Tienes que elegir si o no";
				}
			}
	return velocidadNitro;
}


int main() {
	int turnos = 0;
	int eleccion;
	string nom;
	string nomRival;
	int opcionMenu;
	cout << "||============================================|| Carrera de lanchas ||============================================||\n";
	cout << "Escriba el nombre de tu lancha: ";
	cin >> nom;
	lancha1.setName(nom);
	cout << "Escriba el nombre de la lancha rival: ";
	cin >> nomRival;
	while (lancha1.getOpcion()!= 2 && turnos != 5)
	{
		lancha2.setName(nomRival);
		cout << "1- Tirar dado \n";
		cout << "2- Salir de la carrera \n"
			;
		cin >> opcionMenu;
		lancha1.setOpcion(opcionMenu);

		if (lancha1.getOpcion() == 1)
		{
			int tiradanitro;
			lancha1.setTirada();
			lancha2.setTirada();
			cout << "La tirada es de " << lancha1.getTirada() <<"\n";
			if (lancha1.getNitro() == 1)
			{
				tiradanitro = nitro();
			}
			if (x == 1)
			{
				velocidad1 += tiradanitro;
			}
			else
			{
				velocidad1 += lancha1.getTirada();
			}
			velocidad2 += lancha2.getTirada();
			lancha1.setVelocidad(velocidad1);
			lancha2.setVelocidad(velocidad2);
			cout << "La lancha " << lancha1.getName() << " va a " << lancha1.getVelocidad() << "km/h\n";
			cout << "La lancha " << lancha2.getName() << " va a " << lancha2.getVelocidad() << "km/h\n";
			lancha1.setDistancia();
			lancha2.setDistancia();
			cout << "La lancha " << lancha1.getName() << " ha recorrido un total de  " << lancha1.getDistancia() << "m\n";
			cout << "La lancha " << lancha2.getName() << " ha recorrido un total de  " << lancha2.getDistancia() << "m\n";

			x = 0;
			turnos += 1;

		}
		else if (lancha1.getOpcion() == 2)
		{
			cout << "Adios";
		}
		else
		{
			cout << "Tienes que elegir una de las dos opciones";
		}
	}

}