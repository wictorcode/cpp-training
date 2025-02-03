#include <iostream>
#include "engine/car.h"
int main() {
    std::cout << "Hello World" << std::endl;
    Car newCar;
    newCar.setBrandName("Honda");
    newCar.setModelName("Civic");
    std::cout << newCar.getBrandName() << std::endl;
    return 0;
}