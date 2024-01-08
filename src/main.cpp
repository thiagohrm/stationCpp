
#include "StationManager.h"
#include <iostream>
#include <memory>
#include <vector>


int main(){
    
    auto pStationManager = std::make_shared<StationManager>();
    std::vector<std::shared_ptr<IStartStop>> pointers;
    pointers.push_back(pStationManager);

    for (auto serviceIt = pointers.begin(); serviceIt != pointers.end(); ++serviceIt) {
        serviceIt->get()->start();
    }

    return 0;
}