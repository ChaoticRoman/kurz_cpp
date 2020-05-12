#include <iostream>

using namespace std;

class Hrac {
   public:
      static int pocet;

      Hrac(string _jmeno, int _cislo) {
         jmeno = _jmeno;
         cislo = _cislo;
         pocet++;
      }

   private:
      string jmeno;
      int cislo;
};

int Hrac::pocet = 0;


int main(void) {
   Hrac h1("Pepa", 1);
   Hrac h2("Honza", 7);

   cout << "Hracu: " << Hrac::pocet << endl;
   cout << "Hracu: " << h1.pocet << endl;
   cout << "Hracu: " << h2.pocet << endl;

   return 0;
}
