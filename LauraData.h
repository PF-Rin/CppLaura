//Laura software for OCESS
//Code by Ryan Torrington-Smith
//Header containing data for most operations

#include <iostream>

struct Movement {
    double speed, acceleration, delta_x, delta_y, delta_z, delta_delta_x, delta_delta_y, delta_delta_z;
    double current_x, current_y, current_z;
    int rudder_angle, engine_percentage, center_pod_percentage;
    
};

struct Trim {
    double aft_trim, fore_trim, aft_trim_delta, fore_trim_delta;
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

class Planet {
    private:
        int gravity;
        double water_temperature_modifier;
        std::string file_name, planet_name;
        
        public:
            //Constructor
            Planet(std::string file_name);
            
            //Accessors
            //Mutators
            //Deconstructor
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
            //Constructor
            Submarine(std::string submarine_name);
            
            //Accessors
            //Mutators
            //Deconstructor
};
