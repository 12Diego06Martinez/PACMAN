#pragma once
#include "ETSIDI.h"

class Bonus
{
public:
	Bonus();
	float radio;
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
	Vector2D posicion;


	void Dibuja();
	void Mueve(float t);
};

