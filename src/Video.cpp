#include "../header/Video.h"
#include <string>
using namespace std;

Video::Video() {
    this->genero = "NA";
    this->titulo = "NA";
    this->calificacion = 0;
    this->duracion = 0;
    this->id = -1;
}

Video::Video(string genero, string titulo, double calificacion, int duracion, int id) {
    this->genero = genero;
    this->titulo = titulo;
    this->calificacion = calificacion;
    this->duracion = duracion;
    this->id = id;
}

string Video::getGenero() {
    return genero;
}

string Video::getTitulo() {
    return titulo;
}

double Video::getCalificacion() {
    return calificacion;
}

int Video::getDuracion() {
    return duracion;
}

int Video::getCantidadCalificaciones() {
    return cantidadCalificaciones;
}

int Video::getId() {
    return id;
}

void Video::setGenero(string genero) {
    this->genero = genero;
}

void Video::setTitulo(string titulo) {
    this->titulo = titulo;
}

void Video::setCalificacion(double calificacion) {
    this->calificacion = calificacion;
}

void Video::setDuracion(int duracion) {
    this->duracion = duracion;
}

void Video::setCantidadCalificaciones(int cantidadCalificaciones) {
    this->cantidadCalificaciones = cantidadCalificaciones;
}

void Video::setId(int id) {
    this->id = id;
}

void Video::añadirCalificacion(double calificacion) {
    this->cantidadCalificaciones = this->cantidadCalificaciones + 1;
    this->calificacion = (this->calificacion * this->cantidadCalificaciones + calificacion)/(this->cantidadCalificaciones);
}