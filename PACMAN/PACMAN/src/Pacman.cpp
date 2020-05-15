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
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;
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
