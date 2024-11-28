#ifndef TEMPORADA_H
#define TEMPORADA_H

#include <iostream>
#include <string>
#include <vector>
#include "Episodio.h"

using namespace std;

class Temporada {
    private:
        int cantidadEpisodios;
        int numero;
        int cantidadCalificaciones;
        double calificacion;
        string titulo;
        vector<Episodio> episodios;

    public:
        Temporada();
        Temporada(int, int, double, string);

        int getCantidadEpisodios();
        int getNumero();
        int getCantidadCalificaciones();
        double getCalificacion();
        string getTitulo();

        void setCalificacion(double);
        void setNumero(int);
        void setCantidadCalificaciones(int);
        void setCantidadEpisodios(int);
        void setTitulo(string);

        void agregarEpisodio(Episodio&);
};

#endif