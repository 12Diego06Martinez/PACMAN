#pragma once
#include "Mundo.h"
#define PosVect(i,j,M)  j+i*M
enum colores_t { BLANCO, NEGRO, AMARILLO, AZUL_CLARO, AZUL_OSCURO };

class CoordinadorPacman
{
public:
	CoordinadorPacman();
	virtual ~CoordinadorPacman();

	void TeclaEspecial(unsigned char key);
	void Tecla(unsigned char key);
	void Mueve();
	void Dibuja();

private:
	Mundo mundo;
	enum Estado { INICIO, JUEGO, GAMEOVER, FIN };
	Estado estado;
};

