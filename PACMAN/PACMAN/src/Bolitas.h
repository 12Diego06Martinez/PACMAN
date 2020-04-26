#pragma once
#include "Vector2D.h"

class Bolitas
{
public:
	Bolitas();
	virtual ~Bolitas();
	void Dibuja();
	void SetColor(unsigned char r, unsigned char v, unsigned char a);
	void SetRadio(float radio);
	void SetPos(float ix, float iy);

private:
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
	float radio;
	Vector2D posicion;
};

