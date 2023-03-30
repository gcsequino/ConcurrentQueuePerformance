#ifndef BLOCKINGQUEUE_H_INCLUDED
#define BLOCKINGQUEUE_H_INCLUDED

#include <queue>

template <typename T> class BlockingQueue{
    private:
        std::queue<T> q;
    public:
        T front();
        T back();
        bool empty();
        size_t size();
        void push(T e);
        void pop();
}; 

#endif