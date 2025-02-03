//-------------------------------------------------------
// INCLUDES
//-------------------------------------------------------
#include <iostream>
#include "car.h"
//-------------------------------------------------------

Car::Car() {
    this->brandName = "NO_BRAND";
    this->modelName = "NO_MODEL";
}

Car::~Car() {}

void Car::setBrandName(std::string newName) {
    this->brandName = newName;
}

void Car::setModelName(std::string newName) {
    this->modelName = newName;
}

void Car::startEngine() {
    this->isTurnedOn = true;
}

std::string Car::getBrandName() {
    return this->brandName;
}