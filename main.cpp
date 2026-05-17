#include <iostream>
#include "graph.h"
#include "BFS.h"
#include "Dijkstra.h"
#include "BST.h"
#include "fraud.h"
#include "surgepricing.h"
#include "analytics.h"
#include "FileHandler.h"
#include "LinkedList.h"
#include "DP.h"

using namespace std;

int main() {

    // ================= GRAPH =================

    addEdge("Airport", "Mall", 5);
    addEdge("Mall", "Station", 3);
    addEdge("Station", "Office", 4);
    addEdge("Airport", "Office", 10);

    // ================= BST =================

    BST drivers;

    drivers.addDriver({"Rahul", 5});
    drivers.addDriver({"Priya", 4});
    drivers.addDriver({"Aman", 3});

    // ================= LINKED LIST =================

    LinkedList rides;

    rides.addRide("Rahul",
                  "Airport",
                  "Mall",
                  250);

    rides.addRide("Priya",
                  "Station",
                  "Office",
                  180);

    int choice;

    do {

        cout << "\n===== URBAN MOBILITY SYSTEM =====" << endl;

        cout << "1. Show City Graph" << endl;
        cout << "2. BFS Nearby Locations" << endl;
        cout << "3. Shortest Route" << endl;
        cout << "4. Driver Analytics" << endl;
        cout << "5. Surge Pricing" << endl;
        cout << "6. Fraud Detection" << endl;
        cout << "7. Save Ride Record" << endl;
        cout << "8. Show Drivers" << endl;
        cout << "9. Show Ride Records" << endl;
        cout << "10. DP Fibonacci" << endl;
        cout << "0. Exit" << endl;

        cout << "\nEnter Choice: ";
        cin >> choice;

        // ================= GRAPH =================

        if(choice == 1) {

            showGraph();
        }

        // ================= BFS =================

        else if(choice == 2) {

            BFS("Airport");
        }

        // ================= DIJKSTRA =================

        else if(choice == 3) {

            dijkstra("Airport");
        }

        // ================= ANALYTICS =================

        else if(choice == 4) {

            analytics();
        }

        // ================= SURGE PRICING =================

        else if(choice == 5) {

            double demand, supply;

            cout << "Enter Demand: ";
            cin >> demand;

            cout << "Enter Supply: ";
            cin >> supply;

            surgePricing(demand, supply);
        }

        // ================= FRAUD DETECTION =================

        else if(choice == 6) {

            double amount;

            cout << "Enter Ride Amount: ";
            cin >> amount;

            detectFraud(amount);
        }

        // ================= TXT FILE =================

        else if(choice == 7) {

            string name, from, to;
            double amount;

            cout << "Rider Name: ";
            cin >> name;

            cout << "From: ";
            cin >> from;

            cout << "To: ";
            cin >> to;

            cout << "Amount: ";
            cin >> amount;

            saveRideRecord(name,
                           from,
                           to,
                           amount);
        }

        // ================= BST =================

        else if(choice == 8) {

            drivers.showDrivers();
        }

        // ================= LINKED LIST =================

        else if(choice == 9) {

            rides.showRides();
        }

        // ================= DP =================

        else if(choice == 10) {

            int n;

            cout << "Enter n: ";
            cin >> n;

            cout << "Fibonacci: "
                 << fibonacciDP(n)
                 << endl;
        }

        else if(choice == 0) {

            cout << "Exiting Program..." << endl;
        }

        else {

            cout << "Invalid Choice" << endl;
        }

    } while(choice != 0);

    return 0;
}