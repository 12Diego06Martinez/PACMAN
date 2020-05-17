#pragma once
#include "ETSIDI.h"


class Pacman
{
public:
	Pacman();
	virtual ~Pacman();

	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;


	//METODOS
	void Dibuja();
	void Mueve(float t);
	void SetPos(float ix, float iy);
	void SetVel(float vx, float vy);
	
	friend class Interaccion;

};


