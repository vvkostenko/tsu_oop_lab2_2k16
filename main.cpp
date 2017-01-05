#include "src/supply.h"
#include "src/freq.h"
#include "src/diap.h"

#include <iostream>

int main(int argc, char *argv[])
{
    srand(time(NULL));

    Freq f;
    Diap d;

    SuppQueue q(100);

    for (int j = 0; j < q.getSize(); ++j)
        f.calc(q);

    std::cout << f;

    return 0;
}
