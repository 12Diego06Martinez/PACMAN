#include "Pared.h"
#include "glut.h"


Pared::Pared() : Elemento(true, false, AZUL_OSCURO)
{
}


void Pared::Dibuja()
{
	glBegin(GL_QUADS);

	setColor(colores.front());
	glVertex3f(static_cast<float>(getPos().y * ANCHO_BLOQUE), static_cast<float>(-getPos().x * ANCHO_BLOQUE), 0);
	glVertex3f(static_cast<float>(getPos().y * ANCHO_BLOQUE + ANCHO_BLOQUE), static_cast<float>(-getPos().x * ANCHO_BLOQUE), 0);
	glVertex3f(static_cast<float>(getPos().y * ANCHO_BLOQUE + ANCHO_BLOQUE), static_cast<float>(-getPos().x * ANCHO_BLOQUE - ANCHO_BLOQUE), 0);
	glVertex3f(static_cast<float>(getPos().y * ANCHO_BLOQUE), static_cast<float>(-getPos().x * ANCHO_BLOQUE - ANCHO_BLOQUE), 0);


	glEnd();
}