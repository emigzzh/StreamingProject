#ifndef SERIE_H
#define SERIE_H

#include <iostream>
#include <string>
#include <vector>

#include "Video.h"
#include "Temporada.h"

using namespace std;

class Serie {
    private:
        string genero;
        string titulo;
        double calificacion;
        int cantidadCalificaciones;
        int id;
        int cantidadEpisodios;
        int cantidadTemporadas;
        vector<Temporada> temporadas;

    public:
        Serie();
        Serie(string, string, double, int, int, int, int);

        int getCantidadEpisodios();
        int getCantidadTemporadas();

        void setCantidadEpisodios(int);
        void setCantidadTemporadas(int);

        void agregarTemporada(Temporada&);
};

#endif