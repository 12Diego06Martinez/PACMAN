#pragma once

class Vector2D 
{
public:
	//atributos
	float x;
	float y;

	//METODOS
	Vector2D(float xv = 0.0f, float yv = 0.0f);//si se omite el segundo o ambos parametros, se considerarán nulos
	virtual ~Vector2D();
	float operator *(Vector2D& v); // producto escalar
	Vector2D operator *(float m); // producto por un escalar	
	
};
