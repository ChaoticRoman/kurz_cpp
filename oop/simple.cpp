#include <iostream>

using namespace std;

struct Struktura {
    int cislo;
    string jmeno;
};

class Trida {
    public:
        int cislo;
        string jmeno;
};

int main() {
  Struktura s1, s2;
  Trida objekt1, objekt2, objekt3;

  s1.cislo = 42;
  s1.jmeno = "Adam";

  objekt1.cislo = 15;
  objekt1.jmeno = "Honza";

  cout << s1.cislo << " " << s1.jmeno << "\n";
  cout << objekt1.cislo << " " << objekt1.jmeno << "\n";

  cout << s2.cislo << " " << s2.jmeno << "\n";
  cout << objekt2.cislo << " " << objekt2.jmeno << "\n";
  cout << objekt3.cislo << " " << objekt3.jmeno << "\n";

  return 0;
}
