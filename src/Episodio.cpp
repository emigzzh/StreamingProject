#include <string>
#include "../header/Episodio.h"

using namespace std;

Episodio::Episodio() : Video() {
    this->numero = -1;
}

Episodio::Episodio(string genero, string titulo, double calificacion, int duracion, int id, int numero) 
    : Video(genero, titulo, calificacion, duracion, id) {
    this->numero = numero;
}

int Episodio::getNumero() {
    return numero;
}

void Episodio::setNumero(int numero) {
    this->numero = numero;
}