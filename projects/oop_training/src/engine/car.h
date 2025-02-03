//-------------------------------------------------------
#pragma once
//-------------------------------------------------------
// INCLUDES
//-------------------------------------------------------
#include <iostream>

class Car {
private:
    bool isTurnedOn = false;
    std::string brandName;
    std::string modelName;
public:
    Car();
    ~Car();
    void startEngine();
    void setBrandName(std::string newName);
    void setModelName(std::string newName);
    std::string getBrandName();
};



//-------------------------------------------------------