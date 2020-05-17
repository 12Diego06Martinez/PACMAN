#include "Laberinto.h"


using namespace std;

Laberinto::Laberinto(std::string filename){
	std::ifstream infile;
	std::string buffer;

	infile.open(filename);

	if (!infile) {
		std::cout << "No se ha encontrado el archivo" << std::endl;
		return;
	}
	infile >> buffer >> N;
	infile >> buffer >> M;

	infile.ignore();

	tableroSolid = new int* [N];
	for (int i = 0; i < N; i++) {
		tableroSolid[i] = new int[M];
	}

	Vector2D c;

	for (int i = 0; i < N; i++) {
		//lee una linea del fichero y pone las casillas en el estado que le corresponda
		std::getline(infile, buffer);
		for (int j = 0; j < M; j++) {

			if (buffer[2 * j] == 'L') { elementos.push_back(new Hueco); }
			else if (buffer[2 * j] == 'P') { elementos.push_back(new Pared); }
			//else if (buffer[2 * j] == 'M') { elementos.push_back(new Moneda); monedas.agregar(c(i, j)); }    //bolitas
			
			/*else if (buffer[2 * j] == 'Z') {
				elementos.push_back(new Hueco);
				fantasmas.push_back(new Fantasma);
				fantasmas.back()->asignarCoord(c(i, j));
			}*/


			else if (buffer[2 * j] == 'J') { elementos.push_back(new Hueco); pacman.asignarCoord(c(i, j)); } 


			elementos[PosVect(i, j, M)]->asignarCoord(c(i, j));					//asigna las coordenadas de la casilla al elemento
			tableroSolid[i][j] = elementos[PosVect(i, j, M)]->isSolid();		//asigna al tableroSolid que lleva la lógica de las colisiones si es sólido el bloque
		}
	}


	//cierra el fichero
	infile.close();
}


Laberinto::~Laberinto() {

}



