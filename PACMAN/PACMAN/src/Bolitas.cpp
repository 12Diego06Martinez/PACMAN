#include "Bolitas.h"
#include "glut.h"

Bolitas::Bolitas() {

}

Bolitas::~Bolitas() {

}

void Bolitas::Dibuja() {
	glColor3ub(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, 0);
}

void Bolitas::SetColor(unsigned char r, unsigned char v, unsigned char a) {
	rojo = r;
	verde = v;
	azul = a;
}

void Bolitas::SetRadio(float rad) {
	radio = rad;
}

void Bolitas::SetPos(float ix, float iy) {
	posicion.x = ix;
	posicion.y = iy;
}
