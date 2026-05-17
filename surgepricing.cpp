#include <iostream>
#include "surgepricing.h"
using namespace std;

void surgePricing(double demand, double supply) {

    double price = 100;

    if(demand > supply)
        price *= 2;

    cout << "Ride Price: " << price << endl;
}