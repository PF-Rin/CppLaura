#ifndef SUBMARINE_H_
#define SUBMARINE_H_

#include <iostream>
#include "laura.h"

class Submarine {
    private:
        bool leak[80], has_grounded, elevation_warning;
        double water_depth;
        int water_temperature, background_noise;
        Movement vessel_movement;
        Trim vessel_trim;
        Combat vessel_combat;
        Vessel vessel_stats;
        Electricity vessel_electric_readings;
        
    public:
        //Constructors
        Submarine(std::string submarine_name);
        
        //Accessors
        //Mutators
        //Deconstructor
        ~Submarine();
};

#endif
