#include <iostream>
using namespace std;

namespace prvni {
   void f() {
      cout << "prvni" << endl;
   }
}

namespace druhy {
   void f() {
      cout << "druhy" << endl;
   }
}

int main () {
   // f();
   prvni::f();
   druhy::f();
   return 0;
}
