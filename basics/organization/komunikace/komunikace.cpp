#include "komunikace.h"

#include <iostream>

using namespace std;

double ziskej_zadani()
{
    cout << "Zadej desetinné číslo: ";
    double zadani;
    cin >> zadani;

    return zadani;
}

void komunikuj_vysledek(double vysledek)
{
    cout << "Výsledek je: " << vysledek << endl;
}
