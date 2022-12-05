#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"



#include <time.h>


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Question 1 by rolling 10 times and testing if value 1-6")
{
	srand(time(NULL)); //this allows rand function to be truly random by assoc with time
	Die dado;
	
	for (int i = 0; i < 10; i++)
	{
	dado.roll();
	REQUIRE(((dado.rolled_value() >=1) && (dado.rolled_value() <= 6)) == true);
	}
}