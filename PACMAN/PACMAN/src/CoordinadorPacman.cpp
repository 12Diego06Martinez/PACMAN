#include "CoordinadorPacman.h"
#include "ETSIDI.h"
#include "glut.h"

CoordinadorPacman::CoordinadorPacman()
{
	estado = INICIO;

}

CoordinadorPacman::~CoordinadorPacman()
{
}

void CoordinadorPacman::Dibuja()
{
	if (estado == INICIO)
	{
		gluLookAt(0, 7.5, 30,  // posicion del ojo
			0.0, 7.5, 0.0,      // hacia que punto mira  (0,0,0) 
			0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)  
		ETSIDI::setTextColor(1, 0, 1);
		ETSIDI::setFont("fuentes/Bitwise.ttf", 16);
		ETSIDI::printxy("Bienvenido al Pang.", -6, 10);
		ETSIDI::setFont("fuentes/Bitwise.ttf", 12);
		ETSIDI::printxy("PULSE LA TECLA -E- PARA EMPEZAR", -8, 7);
		ETSIDI::printxy("Use los cursores izquierdo y derecho para moverse", -8, 6);
		ETSIDI::printxy("Para disparar presione la barra espaciadora", -8, 5);
		ETSIDI::printxy("Si quiere salir pulse la tecla -S-", -8, 4);
	}
	else if (estado == JUEGO)
	{
		//mundo.Dibuja();
	}
	else if (estado == GAMEOVER)
	{
		//mundo.Dibuja();
		ETSIDI::setTextColor(1, 0, 0);
		ETSIDI::setFont("fuentes/Bitwise.ttf", 16);
		ETSIDI::printxy("GAMEOVER: Has perdido", -5, 10);
		ETSIDI::printxy("Pulsa -C- para continuar", -5, 5);
	}
	else if (estado == FIN)
	{
		//mundo.Dibuja();
		ETSIDI::setFont("fuentes/Bitwise.ttf", 16);
		ETSIDI::printxy("ENHORABUENA, ¡Has triunfado!", -5, 10);
		ETSIDI::printxy("Pulsa -C- para continuar", -5, 9);
	}

}

void CoordinadorPacman::Mueve()
{
	if (estado == JUEGO)
	{
		
	}
}

void CoordinadorPacman::Tecla(unsigned char key)
{
	if (estado == INICIO)
	{
		if (key == 'e')
		{
			//mundo.Inicializa();
			estado = JUEGO;
		}
		else if (key == 's')
			exit(0);
	}
	else if (estado == JUEGO)
	{
		//mundo.Tecla(key);
	}
	else if (estado == GAMEOVER)
	{
		if (key == 'c')
			estado = INICIO;
	}
	else if (estado == FIN)
	{
		if (key == 'c')
			estado = INICIO;
	}
}

void CoordinadorPacman::TeclaEspecial(unsigned char key)
{
	//if (estado == JUEGO)
		//mundo.TeclaEspecial(key);
}

