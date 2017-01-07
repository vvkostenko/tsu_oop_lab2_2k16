#include "supply.h"

SuppQueue::SuppQueue()
{

}

SuppQueue::SuppQueue(int size)
{
    if (size > 0)
    {
        currentEl = 0;
        this->size = size;
        queue = new int[size];
        for (int i = 0; i < size; ++i)
            queue[i] = random() % 5;
    }
}

SuppQueue::SuppQueue(const SuppQueue& anotherSup)
{
    this->size = anotherSup.size;
    this->currentEl = anotherSup.currentEl;
    for (int i = 0; i < size; ++i)
        this->queue[i] = anotherSup.queue[i];
}

SuppQueue::~SuppQueue()
{
    if(queue)
        delete [] queue;
}

int SuppQueue::get()
{
    if (++currentEl <= size)
    {
        return queue[currentEl-1];
    }

    return -1;
}

int SuppQueue::getSize()
{
    return size;
}

std::ostream& operator << (std::ostream& out, const SuppQueue& sq)
{
    for (int i = 0; i < sq.size; ++i)
        out << sq.queue[i] << ' ';
    std::cout << std::endl;
    return out;
}
