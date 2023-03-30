#include <BlockingQueue/BlockingQueue.h>

template <typename T>
T BlockingQueue<T>::front() {
    return q.front();
}

template <typename T>
T BlockingQueue<T>::back() {
    return q.back();
}

template <typename T>
bool BlockingQueue<T>::empty() {
    return q.empty();
}

template <typename T>
size_t BlockingQueue<T>::size() {
    return q.size();
}

template <typename T>
void BlockingQueue<T>::push(T e) {
    q.push(e);
}

template <typename T>
void BlockingQueue<T>::pop() {
    q.pop();
}