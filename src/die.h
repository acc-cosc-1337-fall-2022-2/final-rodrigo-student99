//
#ifndef DIE_H
#define DIE_H

#include <stdlib.h> //rand function

class Die 
{
//public function of roll() and public function of int rolled_value
public:
    //setter function that assigns value 1-6 inclusive for roll_value
    void roll();

    //getter function for roll_value
    int rolled_value() const {return roll_value;}

private:
    //variable that stores value that is rolled
    int roll_value;

    int sides{6};
};

#endif