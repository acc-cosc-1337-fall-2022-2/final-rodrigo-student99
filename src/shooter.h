//
#ifndef SHOOTER_H
#define SHOOTER_H
#include "roll.h"
#include "die.h"
#include <vector>
#include <iostream>

using std::vector;

class Shooter
{
friend std::ostream& operator<< (std::ostream& out, Shooter& shots);

public:
    Roll* throw_die(Die& ex1, Die& ex2);


    //destructor that frees memory and undangles pointers
    ~Shooter();
    
    
private:
    vector<Roll*> rolls;

};











#endif
