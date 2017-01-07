#ifndef SUPPLY_H
#define SUPPLY_H

#include <iostream>
#include <fstream>
#include <random>

class SuppBase
{
public:
    SuppBase();
    ~SuppBase();

    virtual int get() = 0;
};

class SuppFile : public SuppBase
{
    std::ifstream file;

public:
    SuppFile();
//    SuppFile(int size);
    ~SuppFile();

    int get();
};

class SuppKbrd : public SuppBase
{
public:
     SuppKbrd();
     ~SuppKbrd();

     int get();
};

class SuppQueue : public SuppBase
{
    int *queue;
    int size;
    int currentEl;
public:

    SuppQueue();
    SuppQueue(int size);
    SuppQueue(const SuppQueue &anotherSup);
    ~SuppQueue();

    int get();
    int getSize();

    friend std::ostream& operator << (std::ostream& out, const SuppQueue& sq);
};

#endif // SUPPLY_H
