//Name:     Hussien Ashraf
//ID:       20170093
//Purpose:  Odometer (individual task)


#include <iostream>
#include "odometer.h"

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    Odometer trip1 (x,y);
    cout << "Number of gallons: "<< trip1.num_gallons() << endl;
    trip1.reset();
    trip1.set_fuel_e(3);
    trip1.miles_driven (300);
    cout << "Number of gallons: " <<trip1.num_gallons() << endl;
    cout << "Fuel Efficiency: " << trip1.GetFuel_efficency() <<endl;
    cout << "Miles Driven: " << trip1.GetMiles() << endl;
    return 0;
}
