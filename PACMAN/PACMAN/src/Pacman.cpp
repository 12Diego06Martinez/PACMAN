#include "stdlib.h"
#include "glut.h"
#include "ETSIDI.h"
#include "Pacman.h"

#include <iostream>
using namespace ETSIDI;
using ETSIDI::getTexture;

Sprite* sprite;

// CONSTRUCTOR-DESTRUCTOR

Pacman::Pacman()
{
	sprite = new Sprite("imagenes/pacman.png", 5, 5, 10, 10);
}

Pacman::~Pacman()
{

}



// METODOS

void Pacman::Dibuja()
{

	sprite->draw();
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
