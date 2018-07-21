#include "ElectricCar.hpp"
#include <iostream>

ElectricCar::ElectricCar(ElectricEngine* engine)
    : engine_(engine)
{}



void ElectricCar::charge()
{
    std::cout << __FUNCTION__ << std::endl;
}
void ElectricCar::refill()
{
    charge();
}
ElectricCar::~ElectricCar() {}
