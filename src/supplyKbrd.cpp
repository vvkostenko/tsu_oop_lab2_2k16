#include "supply.h"

SuppKbrd::SuppKbrd()
{

}

//SuppKbrd::SuppKbrd(const SuppKbrd &anotherSup)
//{

//}

SuppKbrd::~SuppKbrd()
{

}

int SuppKbrd::get()
{
    int data;
    std::cin >> data;

    return data >= 0 ? data : -1;
}
