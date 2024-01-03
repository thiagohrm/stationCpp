
#include "Station.h"
#include <iostream>
#include <memory>


int main(){
    
    auto pStation = std::make_shared<Station>();
    std::cout << "Station value is : " << pStation->getTest();

    return 0;
}