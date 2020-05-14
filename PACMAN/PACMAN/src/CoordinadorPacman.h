#pragma once


class CoordinadorPacman
{
public:
	CoordinadorPacman();
	virtual ~CoordinadorPacman();

	void TeclaEspecial(unsigned char key);
	void Tecla(unsigned char key);
	void Mueve();
	void Dibuja();

private:
	//Mundo mundo;
	enum Estado { INICIO, JUEGO, GAMEOVER, FIN };
	Estado estado;
};

