
#include "StationManager.h"
#include <iostream>
#include <cstdint>

bool StationManager::start(){
    makeStation(94400,"ANTENA 1");
    makeStation(95500,"ANTENA 2");
    makeStation(96600,"ANTENA 3");
    makeStation(97700,"ANTENA 4");
    return true;
}

void StationManager::stop(){

}

void StationManager::makeStation(uint32_t freq, std::string psName){
    std::cout << "making a station, freq :" << freq << " psName: " << psName << std::endl ;
    mStations.push_back({freq, psName});
}