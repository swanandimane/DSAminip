#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include <iostream>
#include <queue>

using namespace std;

struct RideRequest {

    string rider;
    string from;
    string to;

    int priority;

    RideRequest(string r,
                string f,
                string t,
                int p) {

        rider = r;
        from = f;
        to = t;

        priority = p;
    }
};

struct Compare {

    bool operator()(RideRequest a,
                    RideRequest b) {

        return a.priority < b.priority;
    }
};

class RideQueue {

    priority_queue<RideRequest,
                   vector<RideRequest>,
                   Compare> pq;

public:

    void addRequest(string rider,
                    string from,
                    string to,
                    int priority);

    void processRequest();
};

#endif