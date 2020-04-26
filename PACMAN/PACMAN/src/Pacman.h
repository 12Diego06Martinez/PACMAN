#pragma once
#include "Vector2D.h"

class Pacman
{
public:
	Pacman();
	virtual ~Pacman();

	float tamaño;
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;


	//METODOS
	void Dibuja();
	void Mueve(float t);
	void SetVel(float vx, float vy);
	friend class Interaccion;

};


