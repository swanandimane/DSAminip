#include <iostream>
#include "fraud.h"
using namespace std;

void detectFraud(double amount) {

    if(amount > 1000)
        cout << "Fraud Ride Detected!" << endl;

    else
        cout << "Ride Safe" << endl;
}