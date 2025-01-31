#include "VehicleQueue.h"

void VehicleQueue::enqueue(Vehicle v) {
    queue.push(v);
}

Vehicle VehicleQueue::dequeue() {
    if (!queue.empty()) {
        Vehicle front = queue.front();
        queue.pop();
        return front;
    }
    return Vehicle(-1, -1, -1); // Empty case
}

bool VehicleQueue::isEmpty() {
    return queue.empty();
}

int VehicleQueue::size() {
    return queue.size();
}
