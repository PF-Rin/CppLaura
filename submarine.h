#ifndef SUBMARINE_H_
#define SUBMARINE_H_

#include <iostream>
#include "laura.h"

class Submarine {
    private:
        bool leak[80], grounded, elevation_warning;
        double water_depth;
        int water_temperature, background_noise;
        Movement vessel_movement;
        Trim vessel_trim;
        Combat vessel_combat;
        Vessel vessel_stats;
        Electricity electric_readings;
        
    public:
        //Constructors
        Submarine();
        Submarine(std::string);
        
        //Accessors
		bool isElevationWarning() { return elevation_warning; }
		bool isGrounded() { return grounded; }
		bool isLeaking() {}   //I still need to figure out the syntax for accessing an array
		int getBackgroundNoise() { return background_noise; }
		double getWaterDepth() { return water_depth; }
		int getWaterTemperature() { return water_temperature; }
		Combat getVesselCombat() { return vessel_combat; }
		Electricity getElectricReadings() { return electric_readings; }
		Movement getVesselMovement() { return vessel_movement; }
		Trim getVesselTrim() { return vessel_trim; }
        Vessel getVesselStats() { return vessel_stats; }
        
        //Mutators
        //Deconstructor
};

#endif
