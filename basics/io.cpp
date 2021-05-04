#include <iostream>

int main() {
   std::string jmeno, nalada;

   std::cout << "POČÍTAČ: Ahoj, jak Ti říkají?\nTY: ";
   std::cin >> jmeno;

   std::cout << "POČÍTAČ: Těší mě, " << jmeno << "! Jak se máš?\nTY: ";
   std::cin >> nalada;

   std::cout << "POČÍTAČ: To mě těší, že se máš " << nalada << "! "
             << "Musím jít, " << jmeno << "... Měj se!\n";

   return 0;
}
