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
    SuppKbrd k;

//    for (int j = 0; j < q.getSize() - 1; ++j)
//        d.calc(q);

    for (int i = 0; i < 10; ++i)
        d.calc(k);

    //d.calc(q);

    std::cout << d;

    return 0;
}
