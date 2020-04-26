#include "Pacman.h"
#include "stdlib.h"
#include "glut.h"


// CONSTRUCTOR-DESTRUCTOR

Pacman::Pacman()
{
	radio = 1.0f;
	rojo = verde = azul = 255;
}

Pacman::~Pacman()
{

}


// METODOS

void Pacman::Dibuja()
{
	glColor3ub(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio,20,20); //Para empezar el pacman se representa como una esfera, ya lo cambiaremos
	glTranslatef(-posicion.x, -posicion.y, 0);
}

void Pacman::Mueve(float t)
{
	//posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	//velocidad = velocidad + aceleracion * t;
}

void Pacman::SetVel(float vx, float vy)
{
	velocidad.x = vx;
	velocidad.y = vy;
}

void Pacman::SetColor(unsigned char r, unsigned char v, unsigned char a)
{
	rojo = r;
	verde = v;
	azul = a;
}

void Pacman::SetRadio(float r)
{
	radio = r;
}

void Pacman::SetPos(float ix, float iy)
{
	posicion.x = ix;
	posicion.y = iy;
}
