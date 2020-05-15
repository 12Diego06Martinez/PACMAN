#include "Vector2D.h"
#include "stdlib.h"
#include "glut.h"

//CONSTRUCTOR-DESTRUCTOR
Vector2D::Vector2D(float xv, float yv)
{
	x = xv;
	y = yv;
}

Vector2D::~Vector2D()
{

}

float Vector2D:: operator *(Vector2D& v)
{
	return x * v.x + y * v.y;
}

Vector2D Vector2D:: operator *(float m)
{
	Vector2D res;
	res.x = m * x;
	res.y = m * y;
	return res;
}