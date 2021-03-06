#include <iostream>

int main()
{
    char c = 0;
    while(c != '\n')
    {
        std::cin >> c;
        std::cout << "Pressed " << c << std::endl;
    }
    return 0;
}
