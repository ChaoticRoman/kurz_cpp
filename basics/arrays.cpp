#include <iostream>

constexpr int N = 5;

int main()
{
     double cisla[N], suma = 0;

     using namespace std;

     for(int i=0; i<N; ++i)
     {
          cout << "Zadej " << i+1 << ". cislo: ";
          cin >> cisla[i];
          suma += cisla[i];
     }

     printf("Cisla byla: ");
     for(int i=0; i<N; ++i)
     {
          cout << cisla[i] << " ";
     }
     cout << endl;

     double prumer = (double)suma / N;
     cout << "Prumer je " << prumer << endl;

     return 0;
}
