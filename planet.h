#ifndef PLANET_H_
#define PLANET_H_

#include <iostream>

class Planet {
    private:
        //int gravity;
        float gravity;
        double water_temperature_modifier;
        std::string file_name, planet_name;
        
    public:
        //Constructors
        Planet();
        Planet(std::string);
            
        //Accessors
        //Mutators
        //Deconstructor
        ~Planet();
};

#endif
