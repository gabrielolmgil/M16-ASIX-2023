#pragma once
#include <iostream>
using namespace std;

class Lancha
{
private:
	int velocidad;
	int distancia_recorrida;
	int nitro = 1;
	string nombre;
	int opcion;
	int numTirada;
public:
	Lancha();
	string getName();
	void setName(string name);
	void setOpcion(int pOpcion);
	int getOpcion();
	int getTirada();
	void setTirada();
	int getNitro();
	void setNitro();
	int getVelocidad();
	void setVelocidad(int tirada);
	int getDistancia();
	void setDistancia();
};