#include <vector>
#include <string>
#include "../header/Temporada.h"
using namespace std;

Temporada::Temporada() {
    this->cantidadEpisodios = -1;
    this->numero = -1;
    this->calificacion = -1;
    this->titulo = "NA";
    this->episodios = vector<Episodio>();
}

Temporada::Temporada(int cantidadEpisodios, int numero, double calificacion, string titulo) {
    this->cantidadEpisodios = cantidadEpisodios;
    this->numero = numero;
    this->calificacion = calificacion;
    this->titulo = titulo;
    this->episodios = vector<Episodio>();
}

int Temporada::getCantidadEpisodios() {
    return cantidadEpisodios;
}

int Temporada::getNumero() {
    return numero;
}

int Temporada::getCantidadCalificaciones() {
    return cantidadCalificaciones;
}

double Temporada::getCalificacion() {
    return calificacion;
}

string Temporada::getTitulo() {
    return titulo;
}

vector<Episodio> getEpisodios() {
        return episodios;
}

void Temporada::setCalificacion(double calificacion) {
    this->calificacion = calificacion;
}

void Temporada::setNumero(int numero) {
    this->numero = numero;
}

void Temporada::setCantidadCalificaciones(int cantidadCalificaciones) {
    this->cantidadCalificaciones = cantidadCalificaciones;
}

void Temporada::setCantidadEpisodios(int cantidadEpisodios) {
    this->cantidadEpisodios = cantidadEpisodios;
}

void Temporada::setTitulo(string titulo) {
    this->titulo = titulo;
}

void Temporada::agregarEpisodio(Episodio& episodio) {
    episodios.push_back(episodio);
    this->cantidadEpisodios = episodios.size();
}