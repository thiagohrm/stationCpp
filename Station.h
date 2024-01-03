#pragma once

#include "IStation.h"

class Station : public IStation 
{
    public:
    std::string getTest() override;

    private:
    std::string test = "OLA MUNDO";

};


