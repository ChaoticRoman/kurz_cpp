#include <iostream>
#include <string>


int main()
{
    time_t start = time(NULL);
    time_t waitTime = 10;

    std::cout << "Do you even lift?" << std::endl << std::flush;

    std::string answer;

    //int c = std::cin.peek();
    //std::cout << "Peek: " << c << std::endl;

    /*char c = std::cin.get();
    std::cout << "Get: " << c << std::endl;*/

    int c = getchar();
    std::cout << "Getchar: " << c << std::endl;

    while (c != '\n' && time(NULL) < start + waitTime)
    {
        if (std::isprint(c))
        {
            std::string temp;
            std::cin >> temp;
            answer += temp;
        }

        //int c = std::cin.peek();
        //std::cout << "Peek: " << c << std::endl;

        //char c = std::cin.get();
        //std::cout << "Get: " << c << std::endl;

        int c = getchar();
        std::cout << "Getchar: " << c << std::endl;

        //std::this_thread::sleep_for(std::chrono::milliseconds(20));
    }

    std::cout << answer << '\n';
    return 0;
}
