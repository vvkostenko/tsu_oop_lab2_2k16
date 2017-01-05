#include "freq.h"

Freq::Freq()
{

}

Freq::Freq(const Freq& fr)
{
//    for (auto iter : fr.frequency)
//        iter->second;
//        this->frequency = fr.frequency; // TODO
}

Freq::~Freq()
{

}

void Freq::calc(SuppBase& sup)
{
    int key = sup.get();
}

std::ostream& operator << (std::ostream& out, const Freq fr)
{
//    std::map<int,int>::iterator iter;
//    for (iter = fr.frequency.begin(); iter != fr.frequency.end(); ++iter)
//        std::cout << iter->first << " " << iter->second << '\n';
}
