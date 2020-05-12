#include <iostream>
#include <array>

constexpr int N = 5;

int main()
{
     using namespace std;

     array<double, N> cisla;
     double suma = 0;

     int i = 1;
     for(double &cislo: cisla)
     {
          cout << "Zadej " << i << ". cislo: ";
          cin >> cislo;
          suma += cislo;
          ++i;
     }

     printf("Cisla byla: ");
     for(const double &cislo: cisla)
     {
          cout << cislo << " ";
     }
     cout << endl;

     double prumer = (double)suma / N;
     cout << "Prumer je " << prumer << endl;

     return 0;
}
