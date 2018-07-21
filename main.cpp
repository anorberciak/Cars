#include "PetrolCar.hpp"
#include "ElectricCar.hpp"
#include "HybridCar.hpp"

int main()
{
    Car* car;
    try
    {
        PetrolCar opel(new PetrolEngine(120, 1800, 6));
        car = &opel;
        car->accelerate(50);
        car->brake();
        car->refill();
        //opel.refuel();
    }
    catch(const std::exception& er)
    {
        std::cout << "opel:" << er.what() << std::endl;
    }

    try
    {
        ElectricCar nissan(new ElectricEngine(130, 650));
        car = &nissan;
        car->refill();
        car->accelerate(80);
        car->turnLeft();
    }
    catch(const std::exception& er)
    {
        std::cout << "nissan:" << er.what() << std::endl;
    }

    try
    {
        HybridCar toyota(new PetrolEngine(80, 1400, 5), new ElectricEngine(100, 540));
        toyota.accelerate(100);
        toyota.ElectricCar::brake();
        //toyota.charge();
        //toyota.refuel();
    }
    catch(const std::exception& er)
    {
        std::cout << "toyota:" << er.what() << std::endl;
    }
}
