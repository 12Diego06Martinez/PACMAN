#pragma once
#include<string>
#include <vector>
#include "Elemento.h"
#include "CoordinadorPacman.h"

class Laberinto
{
public:
	Laberinto(std::string);
	virtual  ~Laberinto();
	int N;
	int M;
	int** tableroSolid;
	std::vector<Elemento*> elementos;
};

