#include <iostream>

using namespace std;

class Trida {
  public:
    int cislo;
    string jmeno;

    Trida()
    {
        cislo = -9;
        jmeno = "Zatim zadne";
    }

    ~Trida()
    {
        cout << jmeno << " se louci..." << endl;
    }

    void predstaveni()
    {
         cout << cislo << " " << jmeno << endl;
    }

    void prirad_cislo(int i);
};

void Trida::prirad_cislo(int i) {
    cislo = i;
}

int main() {
  Trida objekt1, objekt2;

  objekt1.cislo = 15;
  objekt1.jmeno = "Honza";

  objekt1.predstaveni();
  objekt2.predstaveni();

  objekt2.prirad_cislo(8);
  objekt2.jmeno = "Pepa";

  objekt1.predstaveni();
  objekt2.predstaveni();

  return 0;
}
