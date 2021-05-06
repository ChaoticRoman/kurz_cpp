#include <vector>
#include <iostream>

using namespace std;

int main()
{
   vector<double> v {0.5, 1.0, 2.0};

   for (double &item: v)
   {
       item = 4 * item;
   }

   for (const double &item: v)
   {
       cout << item << endl;
   }
}
