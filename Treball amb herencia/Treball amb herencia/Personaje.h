#pragma once
#include  <iostream>
using namespace std;
class Personaje
{

private:
	int hp;
	std::string name;
	int attackMAX;
	int attack;
	int posicionX;
	int posicionY;

public:
	Personaje(int pHp, std::string pName, int pAttack, int pPoscionX , int pPosiconY);

	int getHp();

	std::string getName();

	int getAttack();
	
	int getPosicionX();

	int getPosicionY();

	void setHp(int php);

	void setName(std::string pname);

	void setAttack();

	void setPosicionX(int pPoscionX);

	void setPosicionY(int pPoscionY);

	void printStatus();

	void printHp();

	void printDmg();

};