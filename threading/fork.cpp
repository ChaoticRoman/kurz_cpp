#include <iostream>
#include <unistd.h>
#include <sys/types.h>


using namespace std;

int main()
{
    int pid = fork() > 0;
    if (pid > 0)
    {
        cout << " Parent: " << pid << " " << getpid() << "\n";
    }
    else
    {
        cout << " Child: " << pid << " " << getpid() << "\n";
    }

    return 0;
}
