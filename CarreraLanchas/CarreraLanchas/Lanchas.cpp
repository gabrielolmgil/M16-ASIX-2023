#include "Lanchas.h"

string Lancha::getName() {
	return nombre;
}
void Lancha::setName(string name) {
	nombre = name;
}
void Lancha::setOpcion(int pOpcion) {
	opcion = pOpcion;
}
int Lancha::getOpcion() {
	return opcion;
}
void Lancha::setTirada() {
	numTirada = rand() % 6;
}
int Lancha::getTirada() {
	return numTirada;
}
void Lancha::setNitro() {
	nitro= nitro - 1;
}
int Lancha::getNitro() {
	return nitro;
}
int Lancha::getVelocidad() {
	return velocidad;
}
void Lancha::setVelocidad(int tirada) {
	velocidad = tirada;
}
int Lancha::getDistancia() {
	return distancia_recorrida;
}
void Lancha::setDistancia() {
	distancia_recorrida = distancia_recorrida + velocidad * 100;
}

Lancha::Lancha() {

}