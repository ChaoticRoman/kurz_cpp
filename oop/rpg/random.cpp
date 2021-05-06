#include "random.h"

#include <cstdlib>

int rand(int from, int to)
{
    return from + (std::rand() % (to - from + 1 ) );
}
