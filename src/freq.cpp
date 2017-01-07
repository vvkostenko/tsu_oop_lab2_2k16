#include "freq.h"

Freq::Freq()
{
    frequency = new std::map<int, int>;
}

Freq::~Freq()
{
    frequency->clear();
}

void Freq::calc(SuppBase& sup)
{
    int key = sup.get();

    while (key >= 0)
    {
        auto iter = frequency->find(key);

        if (iter != frequency->end())
            frequency->at(key)++;

        else
            frequency->insert(std::pair<int, int> (key, 1));

        key = sup.get();
    }

}

std::ostream& operator << (std::ostream& out, const Freq &fr)
{
    auto iter = fr.frequency->begin();
    auto iter_end = fr.frequency->end();
    for (iter; iter != iter_end; ++iter)
        out << iter->first << "\t" << iter->second << '\n';

    return out;
}
