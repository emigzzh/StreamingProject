#ifndef PELICULA_H
#define PELICULA_H

#include <iostream>
#include <string>
#include "Video.h"

using namespace std;

class Pelicula : public Video {
    public:
        Pelicula();
        Pelicula(string, string, double, int, int);

        void f();
};

#endif