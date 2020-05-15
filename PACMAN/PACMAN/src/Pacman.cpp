#include "stdlib.h"
#include "glut.h"
#include "ETSIDI.h"
#include "Pacman.h"

#include <iostream>
using namespace ETSIDI;
using ETSIDI::getTexture;

Sprite *pacman;

// CONSTRUCTOR-DESTRUCTOR

Pacman::Pacman()
{
	pacman= new Sprite("imagenes/pacman.png", 0, 5, 3, 3);
}

Pacman::~Pacman()
{

}



// METODOS

void Pacman::Dibuja()
{

	pacman->draw();
}

void Pacman::Mueve(float t)
{
	posicion.x = posicion.x + velocidad.x * t + aceleracion.x * (0.5f * t * t);
	posicion.y = posicion.y + velocidad.y * t + 0.5f * aceleracion.y * t * t;
	velocidad.x = velocidad.x + aceleracion.x * t;
	velocidad.y = velocidad.y + aceleracion.y * t;

	pacman->setPos(posicion.x,posicion.y);
	//pacman->setVel(velocidad.x, velocidad.y);
}

void Pacman::SetVel(float vx, float vy)
{
	velocidad.x = vx;
	velocidad.y = vy;
}

void Pacman::SetPos(float ix, float iy)
{
	posicion.x = ix;
	posicion.y = iy;
}
