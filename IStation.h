#pragma once

#include <string>

class IStation 
{
    public:
    virtual ~IStation() = default;
    virtual std::string getTest() = 0;
};