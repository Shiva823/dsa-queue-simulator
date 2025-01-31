#include "LaneQueue.h"

void LaneQueue::addLane(int lane_id, int vehicle_count) {
    pq.push({lane_id, vehicle_count});
}

Lane LaneQueue::getHighestPriorityLane() {
    if (!pq.empty()) {
        Lane top = pq.top();
        pq.pop();
        return top;
    }
    return {-1, -1}; // No lane available
}

bool LaneQueue::isEmpty() {
    return pq.empty();
}
