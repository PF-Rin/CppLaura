//Laura software for OCESS
//Code by Ryan Torrington-Smith
//Header containing data for most operations

#ifndef LAURA_H_
#define LAURA_H_

#include <iostream>

struct Movement {
    //double speed, acceleration, delta_x, delta_y, delta_z, delta_delta_x, delta_delta_y, delta_delta_z;
    double speed, acceleration, d_x, d_y, d_z, d2_x, d2_y, d2_z;
    double current_x, current_y, current_z;
    int rudder_angle, engine_percentage, center_pod_percentage;
    
};

struct Trim {
    //double aft_trim, fore_trim, aft_trim_delta, fore_trim_delta;
    double aft_trim, fore_trim, d_aft_trim, d_fore_trim;
};

struct Combat {
    int tubes, tube_flooded[100], regular_torpedos, corrosion_torpedos, intercept_torpedos;
};

struct Vessel {
    bool can_submerge, has_generator;
    int vessel_class, generator_type;
    std::string vessel_name;
};

struct Electricity {
    double maximum_charge, charge_remaining, voltage, amperage;
};

#endif
/*
class Planet {
    private:
        //int gravity;
        float gravity;
        double water_temperature_modifier;
        std::string file_name, planet_name;
        
    public:
        //Constructors
        Planet(std::string a);
            
        //Accessors
        //Mutators
        //Deconstructor
        ~Planet();
};

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
*/
