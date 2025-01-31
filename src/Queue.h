#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

// Vehicle structure
struct Vehicle {
    int id;
    int arrival_time;
    Vehicle* next;

    Vehicle(int _id, int _arrival_time) 
        : id(_id), arrival_time(_arrival_time), next(nullptr) {}
};

// Queue class
class Queue {
private:
    Vehicle* front;
    Vehicle* rear;
    int size;

public:
    Queue();
    ~Queue();
    
    void enqueue(int id, int arrival_time);
    Vehicle* dequeue();
    bool isEmpty() const;
    void displayQueue() const;
};

#endif
