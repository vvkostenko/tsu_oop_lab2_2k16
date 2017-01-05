#ifndef DIAP_H
#define DIAP_H

#include "freq.h"

class Diap : public Freq
{
    int max;
    int min;
    int sum;
public:
    Diap();
    Diap(const Diap& dp);
    ~Diap();

    void calc(SuppBase& sup);
    friend std::ostream& operator << (std::ostream& out, const Diap& dp);
};

#endif // DIAP_H
