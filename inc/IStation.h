#pragma once

#include <string>

class IStation 
{
    public:
    virtual ~IStation() = default;
    virtual void makeStation(u_int32_t freq, std::string psName) = 0;

};