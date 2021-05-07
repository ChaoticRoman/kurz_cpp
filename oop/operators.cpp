
#include <iostream>
#include <string>

using namespace std;

class T
{
public:
  T(int p) { x = p; };

  T operator*(T y) { return T(x + y.x); }

  int x;
};

ostream& operator<<(ostream& out, const T& t1)
{
    out << t1.x;
    return out;
}

int main()
{
    T(3);
    cout << T(3) * T(3) << endl;
}
