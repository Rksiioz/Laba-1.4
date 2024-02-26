#pragma once


template <typename T>
struct StackNode {
    StackNode *next;
    T value;
};

template <typename T>
class Stack {
public:
    Stack();
    virtual ~Stack();
    void push(T value);
    T pop();
    T peek();
    bool isEmpty();

protected:
    StackNode<T> *last;
};

#include "Stack.cpp"