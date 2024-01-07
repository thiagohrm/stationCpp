#pragma once

#include <string>

class IStation 
{
    public:
    virtual ~IStation() = default;
    virtual void makeStation(uint32_t freq, std::string psName) = 0;

};