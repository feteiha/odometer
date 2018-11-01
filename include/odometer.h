#ifndef ODOMETER_H
#define ODOMETER_H


class Odometer
{
    public:
        Odometer();
        Odometer(double, double);
        reset();//resets miles back to 0
        set_fuel_e(double);//sets fuel
        miles_driven(double);//sets miles driven
        double num_gallons(); //returns number of gallons
        double GetMiles();
        double GetFuel_efficency();
    private:
        double miles, fuel_efficency, odo, gallons;
};

#endif // ODOMETER_H
