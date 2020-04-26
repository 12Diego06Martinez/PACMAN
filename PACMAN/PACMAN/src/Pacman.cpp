#include "Pacman.h"
#include "stdlib.h"
#include "glut.h"


// CONSTRUCTOR-DESTRUCTOR

Pacman::Pacman()
{

}

Pacman::~Pacman()
{

}


// METODOS

void Pacman::Dibuja()
{
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y + 1, 0);
	glColor3f(1.0f, 1.0f, 0.0f);
	glutSolidSphere(, , ); //El hombre se representa como un cubo
	glPopMatrix();
}

void Pacman::Mueve(float t)
{

}

void Pacman::SetVel(float vx, float vy)
{

}