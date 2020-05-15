#include "stdlib.h"
#include "glut.h"
#include "Bonus.h"

Bonus::Bonus()
{
	rojo = verde = azul = 255;
}

void Bonus::Dibuja()
{
	glColor3ub(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20); //Para empezar el pacman se representa como una esfera, ya lo cambiaremos
	glTranslatef(-posicion.x, -posicion.y, 0);
}

void Bonus::Mueve(float t)
{
	//posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	//velocidad = velocidad + aceleracion * t;
}
