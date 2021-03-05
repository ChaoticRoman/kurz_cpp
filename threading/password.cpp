#include <iostream>
#include <thread>
#include <chrono>
#include <string>

int main()
{
    time_t start = time(NULL);
    time_t waitTime = 10;

    //try to read a passsword in 10 seconds
    std::cout << "Enter your password! \n";
    std::cout << "Password: ";
    std::string password;
    bool set = false;

    {
        std::thread t1([&]() {
            // use getline instead of std::cin >> password; to allow empty input
            std::getline(std::cin, password);
            set = true;
            });

        while (!set && time(NULL) < start + waitTime)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(20));
        }
        t1.detach();
    }

    //check if password was entered
    if (!set)
        std::cout << "\nTimeout.\n";
    else
        std::cout << "\nYou gave " << password << ".\n";

    return 0;
}
