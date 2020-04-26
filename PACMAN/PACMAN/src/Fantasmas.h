#pragma once
#include "Vector2D.h"

class Fantasmas
{
public:
	// CONSTRUCTOR-DESTRUCTOR
	Fantasmas();
	virtual ~Fantasmas();

	float tamaño;
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;

	//METODOS
	void Dibuja();
	void Mueve(float t);
	void SetColor(unsigned char r, unsigned char v, unsigned char a);
	void SetPos(float ix, float iy);
	void SetVel(float vx, float vy);

	friend class Interaccion;
};

