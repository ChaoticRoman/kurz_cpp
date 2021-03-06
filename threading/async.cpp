#include <iostream>
#include <future>
#include <thread>
#include <chrono>

std::string getAnswer()
{
    std::string answer;
    std::cin >> answer;
    return answer;
}

int main()
{
    std::chrono::seconds timeout(5);
    std::cout << "Do you even lift?" << std::endl << std::flush;

    std::string answer;
    std::future<std::string> future = std::async(getAnswer);

    if (future.wait_for(timeout) == std::future_status::ready)
        std::cout << "the answer was: " << future.get() << std::endl;
    else
        std::cout << "timeout" << std::endl;

    exit(0);
}
