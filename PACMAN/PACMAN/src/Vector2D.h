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

    float modulo(); //modulo del vector
    float argumento(); //argumento del vector
    Vector2D unitario(); // devuelve un vector unitario
    Vector2D operator - (const Vector2D&); // resta de vectores
    Vector2D operator + (const Vector2D&); // suma de vectores
    float operator *(const Vector2D& v); // producto escalar
    Vector2D operator *(float m); // producto por un escalar    

};