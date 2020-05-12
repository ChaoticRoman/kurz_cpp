#define DEBUG
//#undef DEBUG

#ifdef DEBUG
#include <iostream>
using namespace std;
#endif

#define PI 3.14159

#define MAX(a,b) (a) > (b) ? (a) : (b)

// Pozor!
#define f(N) N + N

// Spravne
#define g(N) ((N) + (N))


int main() {
    int x = 1;
    int y = 2;

    int z = MAX(x, y);
#ifdef DEBUG
    cout << "z = " << z << endl;
#endif

    double r = 1.0;
    double C = 2 * PI * r;
#ifdef DEBUG
    cout << "C = " << C << endl;
#endif

    int chyba = f(5) * f(5);
    int spravne = g(5) * g(5);
#ifdef DEBUG
    cout << "chyba = " << chyba << endl;
    cout << "spravne = " << spravne << endl;
#endif

}
