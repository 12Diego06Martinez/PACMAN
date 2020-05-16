#pragma once
#include "Bonus.h"
#include"Pacman.h"
#include "Fantasmas.h"
#include "Laberinto.h"

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
	Laberinto laberinto;



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

