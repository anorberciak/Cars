#pragma once
#include "PetrolEngine.hpp"
#include  "Car.hpp"

class PetrolCar : virtual public Car
{
public:
    PetrolCar(PetrolEngine* engine) 
        : engine_(engine)
    {}
    virtual ~PetrolCar();
    void changeGear(int g);
    void refill();
//   {
//        refuel();
//    }
private:
    void refuel();
    PetrolEngine* engine_;
};

