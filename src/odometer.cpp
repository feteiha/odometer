#include "odometer.h"
#include <iostream>

using namespace std;


Odometer::Odometer()
{
   miles = 0;
   gallons = 0;
   fuel_efficency = 0;

}

Odometer::Odometer(double x, double y)
{
miles = x; //sets miles
gallons = y; //sets gallons
fuel_efficency = x/y ; //calculates fuel efficiency

}

Odometer::reset()
{
    miles = 0; //resets miles back to 0
}

Odometer::set_fuel_e(double x)
{
    fuel_efficency = x; //sets fuel efficiency to required value
}

Odometer::miles_driven(double x)
{
    miles = miles + x; //adds to the total miles the miles driven
}

double Odometer::num_gallons()
{
    if (fuel_efficency == 0){//checks in order not to divide over 0
        gallons = 0;
    }
    else{
        gallons = miles / fuel_efficency ; //calculates the amount of gallons used
    }
    return gallons; //returns the amount of gallons used since last reset
}

double Odometer::GetMiles()
{
    return miles; //returns number of miles driven
}

double Odometer::GetFuel_efficency()
{
    return fuel_efficency; //returns the fuel efficency
}
