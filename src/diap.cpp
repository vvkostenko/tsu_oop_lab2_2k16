#include "diap.h"
#include <climits>

Diap::Diap()
{
    max = 0;
    min = INT_MAX;
    sum = 0;
}

Diap::Diap(const Diap& dp)
{
    max = dp.max;
    min = dp.min;
    sum = dp.sum;
}

Diap::~Diap()
{

}

void Diap::calc(SuppBase &sup)
{
    int x = sup.get();

    while (x >= 0)
    {
        if (x > max)
            max = x;
        if (x < min)
            min = x;
        sum += x;

        x = sup.get();
    }
}

std::ostream& operator << (std::ostream& out, const Diap& dp)
{
    out << dp.min << std::endl
        << dp.max << std::endl
        << dp.sum << std::endl;

    return out;
}
