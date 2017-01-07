#include "src/supply.h"
#include "src/freq.h"
#include "src/diap.h"

#include <iostream>

int main(int argc, char *argv[])
{
    srand(time(NULL));

    Diap dq, dk, df;
    Freq fq, fk, ff;

    SuppQueue sq1(5), sq2(5);
    SuppKbrd sk1, sk2;
    SuppFile sf1, sf2;

    std::cout << sq1 << sq2 << std::endl;

    dq.calc(sq1);
    std::cout << dq << std::endl;

    dk.calc(sk1);
    std::cout << dk << std::endl;

    df.calc(sf1);
    std::cout << df << std::endl;

    fq.calc(sq2);
    std::cout << fq << std::endl;

    fk.calc(sk2);
    std::cout << fk << std::endl;

    ff.calc(sf2);
    std::cout << ff << std::endl;

    return 0;
}
