#include "PetrolCar.hpp"

PetrolCar::PetrolCar(PetrolEngine* engine)
    : engine_(engine)
{}

PetrolCar::~PetrolCar() {}

void PetrolCar::changeGear(int g)
{

}
void PetrolCar::refill()
{
        refuel();
}
void PetrolCar::refuel()
{
    std::cout << __FUNCTION__ << std::endl;
}
