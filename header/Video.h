#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>
#include <string>
using namespace std;

class Video {
    private:
        string genero; // Drama, Acción, Misterio
        string titulo;
        double calificacion; // 1 -> 5
        int duracion;
        int cantidadCalificaciones;
        int id;

    public:
        Video();
        Video(string, string, double, int, int);

        string getGenero();
        string getTitulo();
        double getCalificacion();
        int getDuracion();
        int getCantidadCalificaciones();
        int getId();

        void setGenero(string);
        void setTitulo(string);
        void setCalificacion(double);
        void setDuracion(int);
        void setCantidadCalificaciones(int);
        void setId(int);

        void añadirCalificacion(double);
};

#endif