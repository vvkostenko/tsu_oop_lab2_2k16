#include "supply.h"

SuppFile::SuppFile()
{
    file.open("2k16_lab2_file"); // !!!
    if (!file.is_open())
        std::cout << "FILE ERROR!";
}

SuppFile::~SuppFile()
{
    file.close();
}

int SuppFile::get()
{
    if (!file)
        return -1;

    int a;
    file >> a;
    return a;
}
