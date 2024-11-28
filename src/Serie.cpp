#include "../header/Serie.h"
#include "../header/Video.h"
#include <vector>
#include <string>
using namespace std;

Serie::Serie() {
    this->cantidadEpisodios = 0;
    this->cantidadTemporadas = 0;
    this->temporadas = vector<Temporada>();
}

// Constructor con parámetros
Serie::Serie(string genero, string titulo, double calificacion, int cantidadCalificaciones, int id, int cantidadEpisodios, int cantidadTemporadas) {
    this->genero = genero;
    this->titulo = titulo;
    this->calificacion = calificacion;
    this->cantidadCalificaciones = cantidadCalificaciones;
    this->id = id;
    this->cantidadEpisodios = cantidadEpisodios;
    this->cantidadTemporadas = cantidadTemporadas;
    this->temporadas = vector<Temporada>();
}

int Serie::getCantidadEpisodios() {
    return cantidadEpisodios;
}

int Serie::getCantidadTemporadas() {
    return cantidadTemporadas;
}

void Serie::setCantidadEpisodios(int cantidadEpisodios) {
    this->cantidadEpisodios = cantidadEpisodios;
}

void Serie::setCantidadTemporadas(int cantidadTemporadas) {
    this->cantidadTemporadas = cantidadTemporadas;
}

void Serie::agregarTemporada(Temporada& temporada) {
    temporadas.push_back(temporada);
    // Añadir codigo cambiar cantidadTemporadas y cantidadEpisodios
}