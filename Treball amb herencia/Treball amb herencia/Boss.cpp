#include "Boss.h"
using namespace std;
Boss::Boss(int pHp,string pName,int pAttack, int pGarrotazo, int pPoscionX, int pPosiconY) : Personaje(pHp,pName,pAttack,pPoscionX,pPosiconY) {
	garrotazo = pGarrotazo;
}
int Boss::getGarrotazo() {
	return garrotazo;
}

void Boss::setGarrotazo(int pgarrotazo) {
	garrotazo = pgarrotazo;
}


void Boss::printAllStats() {
	cout << "El nombre del enemigo final es " << getName() << endl;
	cout << "La vida del enemigo final es " << getHp() << endl;
	cout << "El ataque normal del enemigo final es " << getAttack() << endl;
	cout << "El enemigo tiene " << getGarrotazo() << " garrotazos" << endl;
}
void Boss::printGarrotazo() {
	cout << getName() << " ha saca su garrote le quedan " << getGarrotazo() << endl;
}