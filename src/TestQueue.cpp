#include <iostream>
#include "VehicleQueue.h"
#include "LaneQueue.h"

int main() {
    VehicleQueue vq;
    LaneQueue lq;

    // Add Vehicles
    vq.enqueue(Vehicle(1, 5, 2));
    vq.enqueue(Vehicle(2, 10, 3));
    vq.enqueue(Vehicle(3, 15, 1));

    // Test VehicleQueue
    std::cout << "Vehicle Queue Size: " << vq.size() << std::endl;
    std::cout << "Dequeued Vehicle ID: " << vq.dequeue().id << std::endl;

    // Add Lanes
    lq.addLane(1, 5);
    lq.addLane(2, 15); // This should get priority
    lq.addLane(3, 8);

    // Test LaneQueue
    std::cout << "Highest Priority Lane: " << lq.getHighestPriorityLane().lane_id << std::endl;

    return 0;
}

 
