#include "../header/Pelicula.h"
#include "../header/Video.h"
#include <string>
using namespace std;

Pelicula::Pelicula() : Video() {}

Pelicula::Pelicula(string genero, string titulo, double calificacion, int duracion, int id) 
    : Video(genero, titulo, calificacion, duracion, id) {}

void Pelicula::f() {
    cout << "Do not call this function" << endl;
}