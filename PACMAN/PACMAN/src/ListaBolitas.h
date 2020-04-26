#pragma once
#include "Bolitas.h"
#define MAX_BOLITAS 10

class ListaBolitas
{
public:
	ListaBolitas();
	virtual ~ListaBolitas();
	void Dibuja();
	void Eliminar(int index);
	void Eliminar(Bolitas* b);

private:
	Bolitas * lista[MAX_BOLITAS];
	int numero;
};

