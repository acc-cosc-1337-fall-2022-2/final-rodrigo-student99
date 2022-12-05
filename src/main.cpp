#include "die.h"
#include "roll.h"


#include <iostream>
#include <time.h>

using std::cout;
int main() 
{
	srand(time(NULL));
	Die dice1;
	Die dice2;
	Roll test(dice1,dice2);

	
	for (int k = 0; k < 10; k++)
	{
		test.roll_die();
		cout << "the sum of 2 dice was" << test.roll_value() << "\n";
	}

	return 0;
}