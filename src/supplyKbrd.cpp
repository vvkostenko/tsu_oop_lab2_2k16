#include "supply.h"

SuppKbrd::SuppKbrd()
{

}

SuppKbrd::~SuppKbrd()
{

}

int SuppKbrd::get()
{
    int data;
    std::cin >> data;
//    while (data >= 0)
//        std::cin >> data;

    return data;
}
