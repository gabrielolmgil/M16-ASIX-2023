#pragma once
using namespace std;
#include "Personaje.h"
#include <iostream>

using namespace std;

class Boss : public Personaje
{
private:
	int garrotazo;
	int shield;


public:
	Boss(int pHp,string pName,int pAttack,int pGarrotazo, int pPoscionX, int pPosiconY);

	int getGarrotazo();

	void setGarrotazo(int pGarrotazo);

	void printAllStats();

	void printGarrotazo();
};