#pragma once

#include "IStation.h"
#include "IStartStop.h"
#include "StationData.h"
#include <vector>
#include <cstdint>

class StationManager : 
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
    std::vector<StationData> mStations;
};


