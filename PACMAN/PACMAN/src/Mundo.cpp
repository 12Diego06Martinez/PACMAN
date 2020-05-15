#include "Mundo.h"
//#include "Interaccion.h"
#include "ETSIDI.h"
#include <stdlib.h>
#include "glut.h"
#include <math.h>


Mundo::Mundo()
{

}

Mundo::~Mundo()
{
	
}


void Mundo::Dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
		0.0, y_ojo, 0.0,      // hacia que punto mira  (0,0,0) 
		0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    


	pacman.Dibuja();
	bonus.Dibuja();
	fantasmas.Dibuja();
}

void Mundo::Mueve()
{
	pacman.Mueve(0.025f);
	bonus.Mueve(0.025f);
	fantasmas.Mueve(0.025f);

	//Interaccion::rebote(pacman,laberinto);

}

void Mundo::Inicializa()
{
	impacto = false;
	nivel = 0;
	cargarNivel();

	x_ojo = 0;
	y_ojo = 7.5;
	z_ojo = 30;

	//bonus.SetPos(5.0f, 5.0f);
	
}

void Mundo::Tecla(unsigned char key)
{
	
}

void Mundo::TeclaEspecial(unsigned char key)
{
	switch (key)
	{
	case GLUT_KEY_LEFT:
		pacman.SetVel(-5.0f, 0.0f);
		break;
	case GLUT_KEY_RIGHT:
		pacman.SetVel(5.0f, 0.0f);
		break;
	}
}

bool Mundo::cargarNivel()
{
	nivel++;
	pacman.SetPos(0, 0);

	if (nivel == 1)
	{
		//crear aqui el nuevo laberinto
		
	}
	if (nivel == 2)
	{
		//crear aqui el laberinto
		
	}
	if (nivel == 3)
	{
		//crear el laberinto
	}
	if (nivel <= 3)
		return true;
	return false;
}
