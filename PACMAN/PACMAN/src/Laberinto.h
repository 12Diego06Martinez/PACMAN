#pragma once
#include<fstream>
#include<iostream>
#include<string>
#include <vector>
#include "Elemento.h"
#include "CoordinadorPacman.h"
#include"ETSIDI.h"
#include "Vector2D.h"
#include "Pacman.h"
#include "Pared.h"
#include "Hueco.h"

class Laberinto
{
public:
	Laberinto(std::string);
	virtual  ~Laberinto();
	int N;
	int M;
	int** tableroSolid;
	std::vector<Elemento*> elementos;
	Pacman pacman;
};

