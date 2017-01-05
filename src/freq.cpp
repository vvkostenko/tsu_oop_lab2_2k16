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

    auto iter = frequency->find(key);

    if (iter != frequency->end())
        frequency->at(key)++;

    else
        frequency->insert(std::pair<int, int> (key, 1));

}

std::ostream& operator << (std::ostream& out, const Freq &fr)
{
    auto iter = fr.frequency->begin();
    auto iter_end = fr.frequency->end();
    for (iter; iter != iter_end; ++iter)
        out << iter->first << " " << iter->second << '\n';
}
