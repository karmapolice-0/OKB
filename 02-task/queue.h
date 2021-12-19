#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "mystack.h"

class Queue
{
private:
    Stack s1, s2; // s1 - in, s2 - out

public:
    void push_back(int elem);
    int pop_front();
    bool isEmpty();
    void front();
};

void Queue::push_back(int elem)
{
    if (!s1.isFull())
    {
        s1.put(elem);
        std::cout << "enqueued: " << elem << std::endl;
    }
    else
        std::cout << "!queue is full!" << std::endl;
}

int Queue::pop_front()
{
    int n = -1;
    if (s2.isEmpty())
    {
        while (!s1.isEmpty())
        {
            s2.put(s1.get());
        }
    }
    if (!s2.isEmpty())
    {
        n = s2.get();
        std::cout << "dequeued: " << n << std::endl;
        return n;
    }
    else
    {
        std::cout << "Underflow! " << std::endl;
        return n;
    }
}

void Queue::front()
{
    if (s2.isEmpty())
    {
        while (!s1.isEmpty())
        {
            s2.put(s1.get());
        }
    }
    if (!s2.isEmpty())
    {
        int n = s2.get();
        std::cout << "top: " << n << std::endl;
        s2.put(n);
    }
    else
    {
        std::cout << "Underflow!" << std::endl;
    }
}

bool Queue::isEmpty()
{
    if (s1.isEmpty() && s2.isEmpty())
    {
        std::cout << "Empty" << std::endl;
        return true;
    }
    else
    {
        std::cout << "Not Empty" << std::endl;
        return false;
    }
}

#endif // MYQUEUE_H