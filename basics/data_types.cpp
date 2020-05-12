#include <iostream>

using namespace std;

int main() {
    int cislo = -42;

    float tretina_f = 1.0 / 3;
    double tretina_d = 1.0 / 3;
    long double tretina_ld = 1.0L / 3.0;

    char pismenko = 'c';
    const char c_retezec[] = "Ahoj světe!";
    string retezec = "Ahoj světe!";

    bool pravda = 2 > 1;
    bool nepravda = false;

    cout.precision(32);

    cout << "cislo = " << cislo << endl;
    cout << "tretina_f = " << tretina_f << endl;
    cout << "tretina_d = " << tretina_d << endl;
    cout << "tretina_ld = " << tretina_ld << endl;
    cout << "pismenko = '" << pismenko << "'" << endl;
    cout << "c_retezec = \"" << c_retezec << "\"" << endl;
    cout << "retezec = \"" << retezec << "\"" << endl;

    cout << "pravda = " << pravda << endl;
    cout << "nepravda = " << nepravda << endl;
}
