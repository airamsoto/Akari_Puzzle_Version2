#ifndef AKARI2_0_TABLERO_H
#define AKARI2_0_TABLERO_H
#include <iostream>

#include "color.h"
#include "celda.h"

using namespace std;
using namespace std;

const int MAX_FILS = 10;
const int MAX_COLS = 10;
typedef struct {
    int nFils, nCols;
    tCelda tablero[MAX_FILS][MAX_COLS];
} tTablero;


typedef enum tDir { NORTE, SUR, ESTE, OESTE };

int getNumFilas(const tTablero& tab);
int getNumCols(const tTablero& tab);
tCelda celdaEnPos(const tTablero& tab, int x, int y);
void ponCeldaEnPos(tTablero& tab, int x, int y, const tCelda& c);
bool leerTablero(ifstream& archivo, tTablero& tab);
void leerYColocarBombillas(ifstream& archivo, tTablero& tab);
void mostrarTablero(const tTablero& tab);
void iniciaTablero (tTablero& tablero);
void destruyeTablero (tTablero& tablero);
void cargarTablero (tTablero&tab, ifstream& archivo);
#endif //AKARI2_0_TABLERO_H