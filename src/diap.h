#ifndef DIAP_H
#define DIAP_H

#include "freq.h"

class Diap : public Freq
{
//    int *values;
    int max;
    int min;
    int sum;
public:
    Diap();
    Diap(const Diap& fr);
    ~Diap();

    void calc(SuppBase& sup);
    friend std::ostream& operator << (std::ostream& out, const Diap& fr);
};

#endif // DIAP_H
