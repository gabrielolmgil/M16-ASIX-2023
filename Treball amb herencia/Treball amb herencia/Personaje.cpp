#pragma once
#include "Personaje.h"
#include  <iostream>
using namespace std;
#include <time.h>
//constructor
Personaje::Personaje(int pHp, string pName, int pAttack, int pPosicionX, int pPosicionY) {
	hp = pHp;
	name = pName;
	attackMAX = pAttack;
	posicionX = pPosicionX;
	posicionY = pPosicionY;
}

//getters
int Personaje::getHp() {
	return hp;
}

std::string Personaje::getName() {
	return name;
}

int Personaje::getAttack() {
	attack = rand() % attackMAX;
	return attack;
}

int Personaje::getPosicionX() {
	return posicionX;
}
int Personaje::getPosicionY() {
	return posicionY;
}


//setters

void Personaje::setHp(int php) {
	hp = php;
}

void Personaje::setName(std::string pname) {
	name = pname;
}

void Personaje::setAttack() {
}

void Personaje::setPosicionX(int pposcionX) {
	posicionX = pposcionX;
}

void Personaje::setPosicionY(int pposcionY) {
	posicionY = pposcionY;
}


//Metodos propios

void Personaje::printStatus() {
	cout << "El nombre del enemigo es " << getName() << " y tiene " << getHp()<< " de vida" << std::endl;
}
void Personaje::printHp() {
	cout << getName() << " le queda " << getHp() << " de vida" << endl;
}
void Personaje::printDmg() {
	cout << getName() << " ha hecho un ataque de " << attack << " de damage" << endl;
}