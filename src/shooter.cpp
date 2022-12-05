//
#include "shooter.h"

Roll* Shooter::throw_die(Die& ex1, Die& ex2)
{
    Roll* roll_ptr = new Roll(ex1, ex2);
    roll_ptr->roll_die();
    rolls.push_back(roll_ptr);
    return roll_ptr;

}

Shooter::~Shooter()
{
    //This may blow up later in example!! Be sure to check here if memory problems
    for (Roll* ele : rolls)
    {
        delete ele;
        ele = NULL;
    }
}

std::ostream& operator<< (std::ostream& out,  Shooter& shots)
{
    
    for (Roll* ele: shots.rolls)
    {
        out <<"the result of this roll was:" << ele->roll_value() << '\n';
    }

    return out;
}