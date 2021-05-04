#include <iostream>

using namespace std;

int main() {
   string jmeno, nalada;

   cout << "POČÍTAČ: Ahoj, jak Ti říkají?\nTY: ";
   getline(cin, jmeno);
   // https://stackoverflow.com/a/7787253/12118546

   cout << "POČÍTAČ: Těší mě, " << jmeno << "! Jak se máš?\nTY: ";
   getline(cin, nalada);

   cout << "POČÍTAČ: To mě těší, že se máš " << nalada << "! "
        << "Musím jít, " << jmeno << "... Měj se!\n";

   return 0;
}
