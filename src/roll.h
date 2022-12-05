//
#ifndef ROLL_H
#define ROLL_H
#include "die.h"

class Roll
{
public:
    //insert constructor here
    Roll(Die& ex1, Die& ex2);
    //main function in class. Will roll both die, save to value, and sets rolled to true
    void roll_die();

    //getter function for value
    const int roll_value() {return value;}

private:
    //two instances of Die class used to be rolled and get sum value
    Die& die1;
    Die& die2;

    bool rolled{false};

    int value;
};

#endif