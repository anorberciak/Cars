#include "PetrolEngine.hpp"
#include "InvalidRange.hpp"
#include <iostream>

PetrolEngine::PetrolEngine(int power,
                           float capacity,
                           int gears)
    : power_(power)
    , capacity_(capacity)
    , gears_(gears)
    , currentGear_(0)
{
    std::cout << __FUNCTION__ << std::endl;
    if((power <50) || (power>350))
    {
            throw InvalidRange("Power range: 50 - 350");
    }
    if((gears < -1) || (gears > 6))
    {
            throw InvalidRange("Gears range: (-1) - 6]");
    }
    if((capacity <1000) || (capacity > 2300))
    {
            throw InvalidRange("Capacity range: 1000 - 2300");
    }
}

void PetrolEngine::changeGear(int gear)
{
    std::cout << __FUNCTION__ << std::endl; 
}
