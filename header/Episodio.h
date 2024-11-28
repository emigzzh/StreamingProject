#ifndef EPISODIO_H
#define EPISODIO_H

#include <iostream>
#include <string>
#include "Video.h"

using namespace std;

class Episodio : public Video {
    private:
        int numero;

    public:
        Episodio();
        Episodio(string, string, double, int, int, int);

        int getNumero();
        void setNumero(int);

        void f();
};

#endif