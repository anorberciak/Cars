#include <iostream>
#include "Car.hpp"

void Car::turnLeft()
{
    std::cout << __FUNCTION__ << std::endl;
}

void Car::turnRight()
{
    std::cout << __FUNCTION__ << std::endl;
}

void Car::brake()
{
    std::cout << __FUNCTION__ << std::endl;
}

void Car::accelerate(int speed)
{
    std::cout << __FUNCTION__ << "(" << speed << ")" << std::endl;
}
Car::~Car() {}
