#ifndef VEHICLE_QUEUE_H
#define VEHICLE_QUEUE_H

#include <queue>
#include "Vehicle.h"

class VehicleQueue {
private:
    std::queue<Vehicle> queue;
public:
    void enqueue(Vehicle v);
    Vehicle dequeue();
    bool isEmpty();
    int size();
};

#endif
