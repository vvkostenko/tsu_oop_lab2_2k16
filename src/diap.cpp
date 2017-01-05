#include "diap.h"

Diap::Diap()
{

}

Diap::Diap(const Diap& fr)
{
    max = fr.max;
    min = fr.min;
    sum = fr.sum;
}

Diap::~Diap()
{

}

void Diap::calc(SuppBase &sup)
{
    sup.get();
}
