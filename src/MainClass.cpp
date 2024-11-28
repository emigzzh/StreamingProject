#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

#include "../header/Video.h"
#include "../header/Pelicula.h"
#include "../header/Serie.h"
#include "../header/Temporada.h"
#include "../header/Episodio.h"

using namespace std;

bool SeriesDataLoader(Serie& vectorList) {
    ifstream myFile;
    myFile.open("../resources/seriesList.csv");

    if (!myFile.is_open()) {
        cout << "Error: No se pudo ingresar al archivo de series." << endl;
        return false; 
    }

    string line;
    getline(myFile, line);

    while(getline(myFile,line)){
        stringstream ss(line);
        string genero, titulo, calificacion, cantidadCalificaciones, id, cantidadEpisodios, cantidadTemporadas;

        getline(ss, genero, ',');
        getline(ss, titulo, ',');
        getline(ss, calificacion, ',');
        getline(ss, cantidadCalificaciones, ',');
        getline(ss, id, ',');
        getline(ss, cantidadEpisodios, ',');
        getline(ss, cantidadTemporadas, '\n');

        double calificacionNum = stod(calificacion);
        int cantidadCalificacionesNum = stod(cantidadCalificaciones);
        int cantidadEpisodiosNum = stoi(cantidadEpisodios);
        int cantidadTemporadasNum = stoi(cantidadTemporadas);
        int id = stoi(id);

        Serie s1(genero, titulo, calificacionNum, cantidadCalificacionesNum, id, cantidadEpisodiosNum, cantidadTemporadasNum);
        vectorList.addItem(s1);
    }

    myFile.close();
    return true;
}

bool PeliculaDataLoader(Pelicula& vectorList) {
    ifstream myFile;
    myFile.open("../resources/peliculasList.csv");

    if (!myFile.is_open()) {
        cout << "Error: No se pudo ingresar al archivo de películas." << endl;
        return false; 
    }

    string line;
    getline(myFile, line);

    while(getline(myFile,line)){
        stringstream ss(line);
        string genero, titulo, calificacion, duracion, cantidadCalificaciones, id;

        getline(ss, genero, ',');
        getline(ss, titulo, ',');
        getline(ss, calificacion, ',');
        getline(ss, duracion, ',');
        getline(ss, cantidadCalificaciones, ',');
        getline(ss, id, '\n');

        double calificacionNum = stod(calificacion);
        int cantidadCalificacionesNum = stod(cantidadCalificaciones);
        int duracion = stoi(duracion);
        int id = stoi(id);

        Serie s1(genero, titulo, calificacion, duracion, cantidadCalificaciones, id);
        vectorList.addItem(s1);
    }

    myFile.close();
    return true;
}

// Asuma que los vectores contienen todas las Peliculas y Series disponibles
// Asuma que cada Serie tiene contenido en su atributo vector Temporadas todas las temporadas que tenga
// Asuma que cada Temporada tiene contenido en su atributo vector Episodios todos los episodios que tenga

int main() {
    vector<Pelicula> peliculasLista;
    vector<Serie> seriesLista;

    PeliculaDataLoader(peliculasLista);
    SeriesDataLoader(seriesLista);

    bool flag = true;
    int option;

    cout << "Bienvenido a la plataforma de streaming!"
         << "Ingrese el número de alguna de las siguientes opciones para realizar acciones:" << endl;

    while(flag) {
        cout << "\n <1> ..." << endl;
        cout << " <2> ..." << endl;
        cout << " <3> ..." << endl;
        cin >> option;

        switch(option) {
            case 1: {
                
                break;
            }

            case 2: {
                
                break;
            }

            case 3: {
            
                break;
            }

            // Añadir todas las funciones sean necesarias
            
            default: {
                cout << option << " no es una opción válida" << endl;
                break;
            }
        }

        cout << "\n¿Desea continuar? (Ingrese el número) \n <1> Sí \n <2> No" << endl;
        bool endFlag = true;
        int key;

        cin >> key;

        while(endFlag) {
            if (key == 1) { endFlag = false; }
            else if (key == 2) { endFlag = false; flag = false; }
            else {
                cout << "Valor no es válido. Ingrese uno nuevamente" << endl;
                cin >> key;
            }
        }
    }

    return 0;
}