#pragma once

#include "IStation.h"
#include "IStartStop.h"
#include "StationObject.h"
#include <vector>
#include <cstdint>

class Station : 
public IStation,
public IStartStop
{
    public:
    //IStation
    void makeStation(uint32_t freq, std::string psName) override;

    //IStartStop
    bool start() override;
    void stop() override;


    private:
    std::vector<StationObject> mStations;
};


