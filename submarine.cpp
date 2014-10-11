#include <string>
#include "submarine.h"

Submarine::Submarine() {
  //Iniziations  
}

Submarine::Submarine(std::string submarine_name) {
    vessel_stats.name = submarine_name;
    std::cout << vessel_stats.name << std::endl;
    
}
