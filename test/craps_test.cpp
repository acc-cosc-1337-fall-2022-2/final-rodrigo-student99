#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"


#include <time.h>


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Question 1 by rolling 10 times and testing if value 1-6")
{
	srand(time(NULL)); //this allows rand function to be truly random by assoc with time
	Die dado;
	
	dado.roll();
	REQUIRE(((dado.rolled_value() >=1) && (dado.rolled_value() <= 6)) == true);

	for (int i = 0; i < 10; i++)
	{
		dado.roll();
		REQUIRE(((dado.rolled_value() >=1) && (dado.rolled_value() <= 6)) == true);
	}
}

TEST_CASE("Verify Question 2 by rolling 10 times and asserting each roll 2-12")
{
	srand(time(NULL)); //this allows rand function to be truly random by assoc with time
	Die dice1;
	Die dice2;
	Roll dados(dice1,dice2);

	dados.roll_die();
	REQUIRE(((dados.roll_value() >= 2) && (dados.roll_value() <= 12)) == true);
	
	for (int j = 0; j < 10; j++)
	{
		dados.roll_die();
		REQUIRE(((dados.roll_value() >= 2) && (dados.roll_value() <= 12)) == true);
	}
}