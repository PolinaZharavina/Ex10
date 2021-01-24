// Copyright 2021 PollyllyZh
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_
#include <iostream>
#include <string>
template <class T>
class MyStack {
 private:
    unsigned int size;
    unsigned int head = 0;
    T* data;

 public:
    explicit MyStack(int size_) {
        size = size_;
        data = new T[size];
    }
    MyStack(const MyStack& stack) {
        size = stack.size;
        data = new T[size];
        for (int i = 0; i < size; ++i) {
            data[i] = stack.data[i];
        }
        head = stack.head;
    }
    ~MyStack() {
        delete[] data;
    }
    T& get() {
        int head_ = head - 1;
        return data[head_];
    }
    int getSize() {
        return size;
    }
    T& pop() {
        head--;
        return data[head];
    }
    void push(double x) {
        if (head < size) {
            data[head] = x;
            head++;
        }
    }
    bool isEmpty() {
        if (head == 0) {
            return true;
        }
        return false;
    }
    bool isFull() {
        if (head == size) {
           return true;
        }
        return false;
    }
};
#endif  // INCLUDE_MYSTACK_H_