#include <string>
#include <iostream>

using namespace std;

int main()
{
    string a = "abcde";

    cout << a.substr(3) << '\n';  // Znaky 3 a dále...
    cout << a.substr(3, a.size()) << '\n';  // Totéž jako předtím

    cout << a.substr(0, 3) << '\n';  // Znaky 0, 1, 2

    string b = "Žlutá";
    cout << b.substr(0, 3) << '\n';  // Pozor!
}
