#pragma once
#include<string>
#include<vector>
#include "Vector2D.h"
#include "CoordinadorPacman.h"


class Elemento
{
public:
	bool Solid;					//indica si el elemento puede ser transpasado
	
	Vector2D coordenadas;			//marca la posicion en el mapa
	std::string nombre_dibujo;			//contiene el nombre del fichero que lo dibuja
	std::vector<colores_t> colores;		//vector de colores que indica de que color es cada pixel


	Elemento(bool solid, colores_t color) :Solid(solid), nombre_dibujo("monocromo") { colores.push_back(color); }
	Elemento(bool solid, std::string nombre_dibujo) :Solid(solid), nombre_dibujo(nombre_dibujo) { leerDibujo(); }
	virtual ~Elemento();
	bool isSolid();
	void asignarCoord(Vector2D pos);
	Vector2D& getPos() { return coordenadas; }
	colores_t getColores(int pos) { return this->colores[pos]; }
	void leerDibujo();
	virtual void Dibuja();
	void setColor(colores_t col);
	void setColor(unsigned char, unsigned char, unsigned char);
	void setSolid(bool solid) { Solid = solid; }
	void noSolid() { Solid = false; }
	
};

