#pragma once
#include "Bolitas.h"
#define MAX_H 10
#define MAX_V 10
#define MAX_BOLITAS (MAX_H * MAX_V)

class ListaBolitas
{
public:
	ListaBolitas();
	virtual ~ListaBolitas();
	void Dibuja();
	void Eliminar(int index);
	void Eliminar(Bolitas* b);
	void SetP();

private:
	Bolitas * lista[MAX_BOLITAS];
	int numero;
};

