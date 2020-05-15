#include "Fantasmas.h"
#include "stdlib.h"
#include "glut.h"
#include "ETSIDI.h"

#include <iostream>
using namespace ETSIDI;
using ETSIDI::getTexture;

Sprite *fantasmaN;
Sprite *fantasmaA;
Sprite *fantasmaR;
Sprite *fantasmaV;

//CONSTRUCTOR-DESTRUCTOR
Fantasmas::Fantasmas()
{
	fantasmaN = new Sprite("imagenes/FantasmaNaranja.png", -2, 2, 2, 2);
	fantasmaA = new Sprite("imagenes/FantasmaAzul.png", 0, 2, 2, 2);
	fantasmaR = new Sprite("imagenes/FantasmaRosa.png", 2, 2, 2, 2);
	fantasmaV = new Sprite("imagenes/FantasmaVerde.png", 4, 2, 2, 2);
}

Fantasmas::~Fantasmas() 
{

}

//METODOS

void Fantasmas::Dibuja()
{
	fantasmaN->draw();
	fantasmaA->draw();
	fantasmaR->draw();
	fantasmaV->draw();
}


void Fantasmas::Mueve(float t)
{
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;
}

void Fantasmas::SetVel(float vx, float vy)
{
	velocidad.x = vx;
	velocidad.y = vy;
}

void Fantasmas::SetPos(float ix, float iy)
{
	posicion.x = ix;
	posicion.y = iy;
}
