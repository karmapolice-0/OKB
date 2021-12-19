#include "queue.h"

int main()
{
    Queue q;
    q.push_back(1);
    q.push_back(2);
    q.push_back(3);

    q.front();

    q.pop_front();
    q.pop_front();

    q.front();

    q.push_back(4);
    q.push_back(5);
    q.push_back(6);
    q.push_back(7);

    q.front();

    q.push_back(8);
    q.push_back(9);
    q.push_back(10);
    q.push_back(11);
    q.push_back(12);
    q.push_back(13);

    q.front();

    q.pop_front();
    q.pop_front();
    q.pop_front();
    q.pop_front();

    q.front();

    q.pop_front();
    q.pop_front();

    q.front();

    q.push_back(14);
    q.push_back(15);
    q.push_back(16);

    q.front();

    q.pop_front();
    q.pop_front();
    q.pop_front();
    q.pop_front();

    q.front();

    return 0;
}