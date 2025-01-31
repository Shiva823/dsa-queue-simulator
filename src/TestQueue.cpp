#include "Queue.h"

int main() {
    Queue vehicleQueue;

    vehicleQueue.enqueue(1, 5);
    vehicleQueue.enqueue(2, 8);
    vehicleQueue.enqueue(3, 12);

    std::cout << "Current Queue:\n";
    vehicleQueue.displayQueue();

    Vehicle* servedVehicle = vehicleQueue.dequeue();
    if (servedVehicle) {
        std::cout << "\nServed Vehicle: ID = " << servedVehicle->id 
                  << ", Arrival Time = " << servedVehicle->arrival_time << "\n";
        delete servedVehicle; // Free memory after processing
    }

    std::cout << "\nQueue after serving one vehicle:\n";
    vehicleQueue.displayQueue();

    return 0;
}
 
