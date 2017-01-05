#include "src/supply.h"
#include "src/freq.h"
#include "src/diap.h"

#include <iostream>

int main(int argc, char *argv[])
{
    srand(time(NULL));

    Freq fq, fk, ff;
    Diap dq, dk, df;

    SuppQueue sq1(50), sq2(50);
    SuppKbrd sk1, sk2;
    SuppFile sf, sf2;

    dq.calc(sq1);
    std::cout << dq << std::endl;

    dk.calc(sk);
    std::cout << dk << std::endl;

    df.calc(sf);
    std::cout << df << std::endl;

    return 0;
}
