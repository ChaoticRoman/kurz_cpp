#include <iostream>
#include <vector>

int main()
{
     using namespace std;

     vector<double> cisla;

     double cislo;
     char c;
     while (true)
     {
          cout << "Zadej " << cisla.size()+1 << ". cislo nebo enter pro konec: ";

          c = cin.peek();
          if (c < '0' || c > '9') break;
          cin >> cislo;
          cin.get();

          cisla.push_back(cislo);
     }
     cout << endl;

     double suma = 0;
     if (cisla.size())
     {
         printf("Cisla byla: ");
         for(const double &cislo: cisla)
         {
              cout << cislo << " ";
              suma += cislo;
         }
         cout << endl;

         double prumer = (double)suma / cisla.size();
         cout << "Prumer je " << prumer << endl;
    }
    else
    {
         cout << "Žádné čísla :-(" << endl;
    }

     return 0;
}
