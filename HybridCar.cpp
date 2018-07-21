#include "HybridCar.hpp"
#include <iostream>

HybridCar::HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng)
        : PetrolCar(petrolEng)
        , ElectricCar(electricEng) {}

HybridCar::~HybridCar() {}


void HybridCar::accelerate(int speed)
{
    PetrolCar::accelerate(speed);
}

void HybridCar::refill()
{
    PetrolCar::refill();
    ElectricCar::refill();
}
