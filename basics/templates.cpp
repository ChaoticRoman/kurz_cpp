#include <iostream>
#include <string>

using namespace std;

template<typename T>
void f(T x, T y)
{
    cout << x + y << '\n';
}

int main()
{
    f<double>(1, 2);
//    f<string>(string("a"), string("bcd"));
//    f<>(string("a"), string("xyz"));
    f(string("a"), string("123"));
    return 0;
}
