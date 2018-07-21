#include "ElectricEngine.hpp"
#include "InvalidRange.hpp"

ElectricEngine::ElectricEngine(int power, int batteryCapacity)
    : power_(power)
    , batteryCapacity_(batteryCapacity)
{

    if((power < 100) || (power > 416))
    {
            throw InvalidRange("The power range: 100 - 416");
    }
    if((batteryCapacity < 100) || (power > 230))
    {
            throw InvalidRange("The battery capacity range: 100 - 230");
    }
    std::cout << __FUNCTION__ << std::endl;
}
