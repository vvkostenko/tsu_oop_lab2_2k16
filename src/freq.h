#ifndef FREQ_H
#define FREQ_H

#include <map>
#include <src/supply.h>

class Freq
{
    std::map<int, int> *frequency;

public:
    Freq();
    ~Freq();

    void calc(SuppBase &sup);
    friend std::ostream& operator << (std::ostream& out, const Freq& fr);
};

#endif // FREQ_H
