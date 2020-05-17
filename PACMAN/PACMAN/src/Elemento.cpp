#include "Elemento.h"
#include<sstream>
#include<fstream>
#include"glut.h"
#define ANCHO_BLOQUE 10
#define ANCHO_PIXEL 1



Elemento::~Elemento()
{
	colores.clear();
	colores.shrink_to_fit();
}

bool Elemento::isSolid()
{
	return Solid;
}


void Elemento::asignarCoord(Vector2D pos)
{
	coordenadas = pos;
}

void Elemento::leerDibujo()
{
	//Todos los dibujos siguen un formato de 10x10 cuadros 
	std::ifstream infile;
	std::string buffer;
	infile.open(nombre_dibujo); //abre el fichero con el nombre de su nombre_dibujo

	for (int i = 0; i < 10; i++) {
		std::getline(infile, buffer);
		for (int j = 0; j < 10; j++) {
			if (buffer[2 * j] == 'B') { colores.push_back(BLANCO); }
			else if (buffer[2 * j] == 'N') { colores.push_back(NEGRO); }
			else if (buffer[2 * j] == 'A') { colores.push_back(AMARILLO); }
			else if (buffer[2 * j] == 'I') { colores.push_back(AZUL_CLARO); }
			else if (buffer[2 * j] == 'C') { colores.push_back(AZUL_OSCURO); }
			
		}
	}

}

void Elemento::Dibuja()
{
	glBegin(GL_QUADS);
	for (int i = 0; i < ANCHO_BLOQUE; i++) {
		for (int j = 0; j < ANCHO_BLOQUE; j++) {
			setColor(getColores(PosVect(i, j, ANCHO_BLOQUE)));
			glVertex3f(static_cast<float>(j * ANCHO_PIXEL + getPos().y * ANCHO_BLOQUE), static_cast<float>(-(i + 1) * ANCHO_PIXEL - getPos().x * ANCHO_BLOQUE),0);
			glVertex3f(static_cast<float>((j + 1) * ANCHO_PIXEL + getPos().y * ANCHO_BLOQUE), static_cast<float>(-(i + 1) * ANCHO_PIXEL - getPos().x * ANCHO_BLOQUE), 0);
			glVertex3f(static_cast<float>((j + 1) * ANCHO_PIXEL + getPos().y * ANCHO_BLOQUE), static_cast<float>(-(i)*ANCHO_PIXEL - getPos().x * ANCHO_BLOQUE), 0);
			glVertex3f(static_cast<float>((j)*ANCHO_PIXEL + getPos().y * ANCHO_BLOQUE), static_cast<float>(-(i)*ANCHO_PIXEL - getPos().x * ANCHO_BLOQUE), 0);
		}
	}
	glEnd();
}

//se cargan los colores del define 
void Elemento::setColor(colores_t col)
{
	switch (col) {
	case BLANCO:
		setColor(255, 255, 255);
		break;
	case NEGRO:
		setColor(0, 0, 0);
		break;
	case AMARILLO:
		setColor(255, 242, 0);
		break;
	case AZUL_CLARO:
		setColor(75, 172, 198);
		break;
	case AZUL_OSCURO:
		setColor(63, 72, 204);
		break;
	}
}

//se llama a la funcion de glut
void Elemento::setColor(unsigned char r, unsigned char g, unsigned char b)
{
	glColor3ub(r, g, b);
}