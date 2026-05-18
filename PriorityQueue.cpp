#include "PriorityQueue.h"

void RideQueue::addRequest(string rider,
                           string from,
                           string to,
                           int priority) {

    pq.push(RideRequest(rider,
                        from,
                        to,
                        priority));

    cout << "\nRide Request Added!\n";
}

void RideQueue::processRequest() {

    if(pq.empty()) {

        cout << "\nNo Ride Requests\n";
        return;
    }

    RideRequest r = pq.top();

    pq.pop();

    cout << "\n===== PROCESSING RIDE =====\n";

    cout << "Rider: "
         << r.rider
         << endl;

    cout << "From: "
         << r.from
         << endl;

    cout << "To: "
         << r.to
         << endl;

    cout << "Priority: "
         << r.priority
         << endl;
}