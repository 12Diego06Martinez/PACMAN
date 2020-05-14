#include "Fantasmas.h"
#include "stdlib.h"
#include "glut.h"



//CONSTRUCTOR-DESTRUCTOR
Fantasmas::Fantasmas()
{
	tamaño = 5;
}

Fantasmas::~Fantasmas() 
{

}

//METODOS

void Fantasmas::Dibuja()
{
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y + 1, 0);
	glColor3f(1.0f, 1.0f, 0.0f);
	glutSolidCube(tamaño); //El hombre se representa como un cubo
	glPopMatrix();
}


void Fantasmas::Mueve(float t)
{
	//posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	//velocidad = velocidad + aceleracion * t;
}

void Fantasmas::SetVel(float vx, float vy)
{
	velocidad.x = vx;
	velocidad.y = vy;
}

void Fantasmas::SetColor(unsigned char r, unsigned char v, unsigned char a)
{
	rojo = r;
	verde = v;
	azul = a;
}

void Fantasmas::SetPos(float ix, float iy)
{
	posicion.x = ix;
	posicion.y = iy;
}
