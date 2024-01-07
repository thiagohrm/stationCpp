
#include "Station.h"
#include <iostream>
#include <memory>
#include <vector>


int main(){
    
    auto pStation = std::make_shared<Station>();
    std::vector<std::shared_ptr<IStartStop>> pointers;
    pointers.push_back(pStation);

    for (auto serviceIt = pointers.begin(); serviceIt != pointers.end(); ++serviceIt) {
        serviceIt->get()->start();
    }

    return 0;
}