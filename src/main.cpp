#include "die.h"
#include "roll.h"
#include "shooter.h"

#include <iostream>
#include <time.h>

using std::cout;
int main() 
{
	srand(time(NULL));
	Die dado1;
	Die dado2;

	Die dado3;
	Die dado4;

	Shooter shoot;

	for (int u = 0; u < 10; u++)
	{
		Roll* just = shoot.throw_die(dado1,dado2);
	}
	
	cout << shoot;
	

	


	return 0;
}