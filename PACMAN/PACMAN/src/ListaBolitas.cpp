#include "ListaBolitas.h"

ListaBolitas::ListaBolitas() {
	numero = 0;
	for (int i = 0;i < MAX_BOLITAS;i++)
		lista[i] = 0;
}
ListaBolitas::~ListaBolitas() {

}
void ListaBolitas::Dibuja() {
	for (int i = 0;i < numero;i++)
		lista[i]->Dibuja();
}

void ListaBolitas::SetP() {
	int n=0;
	for (int i = 0;i < MAX_V;i++)
		for (int j = 0;j < MAX_H;j++) {
			lista[n]->SetPos(j, i);
			n++;
		}
}

void ListaBolitas::Eliminar(int index) {
	if ((index < 0) || (index >= numero))
		return;
	delete lista[index];
	numero--;
	for (int i = index;i < numero;i++)
		lista[i] = lista[i + 1];
}

void ListaBolitas::Eliminar(Bolitas * b) {
	for (int i = 0;i < numero;i++) {
		if (lista[i] == b) {
			Eliminar(i);
			return;
		}
	}
}