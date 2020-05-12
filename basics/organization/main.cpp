#include "vypocty/vypocty.h"
#include "komunikace/komunikace.h"

int main()
{
    double zadani = ziskej_zadani();

    double vysledek = vypocet(zadani);

    komunikuj_vysledek(vysledek);

    return 0;
}
