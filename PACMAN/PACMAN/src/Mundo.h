#pragma once
#include "Bonus.h"
#include"Pacman.h"
#include "Fantasmas.h"

class Mundo
{
private:
	float x_ojo;
	float y_ojo;
	float z_ojo;
	bool impacto;
	int nivel;

	Pacman pacman;
	Fantasmas fantasmas;
	Bonus bonus;



public:
	//METODOS
	Mundo();
	virtual ~Mundo();
	void Tecla(unsigned char key);
	void TeclaEspecial(unsigned char key);
	void Inicializa();
	void Mueve();
	void Dibuja();
	bool cargarNivel();
};

