//
#include "roll.h"

Roll::Roll(Die& ex1, Die& ex2)
: die1(ex1), die2(ex2){}

void Roll::roll_die()
{
    die1.roll();
    die2.roll();
    int value_of_first_roll = die1.rolled_value();
    int value_of_second_roll = die2.rolled_value();

    value = value_of_first_roll + value_of_second_roll;

    rolled = true;
}