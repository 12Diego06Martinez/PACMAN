#pragma once
#include "Vector2D.h"


class Pacman
{
public:
	Pacman();
	virtual ~Pacman();

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


