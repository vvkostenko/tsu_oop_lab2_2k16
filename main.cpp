#include "src/supply.h"
#include "src/freq.h"
#include "src/diap.h"

#include <iostream>

int main(int argc, char *argv[])
{
    srand(time(NULL));

    Diap asd;

    SuppQueue i(5);

    asd.calc(i);

    for (int j = 0; j < i.getSize(); ++j)
        std::cout << i.get() << std::endl;

    return 0;
}
