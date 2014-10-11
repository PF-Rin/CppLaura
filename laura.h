//Laura software for OCESS
//Code by Ryan Torrington-Smith
//Header containing data for most operations

#ifndef LAURA_H_
#define LAURA_H_

#include <iostream>

#pragma comment(lib, "alld.lib")

struct Movement {
    double speed, acceleration, d_x, d_y, d_z, d2_x, d2_y, d2_z;
    double current_x, current_y, current_z;
    int rudder_angle, engine_percentage, center_pod_percentage;
    
};

struct Trim {
    double aft_trim, fore_trim, d_aft_trim, d_fore_trim;
};

struct Combat {
    int tubes, tube_flooded[100], regular_torpedos, corrosion_torpedos, intercept_torpedos;
};

struct Vessel {
    bool can_submerge, has_generator;
    int vessel_class, generator_type;
    std::string name;
};

struct Electricity {
    double maximum_charge, charge_remaining, voltage, amperage;
};

#endif
