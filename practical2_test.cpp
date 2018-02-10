/*
* Name   : practical2_test.cpp
* Purpose: To test the Search Functions
* Author : David McElhinney
* Version: 1.0
*/

// Use this definition to have catch run this file as main
#define CATCH_CONFIG_MAIN

// Use this definition when providing a user defined main 
//#define CATCH_CONFIG_RUNNER

#include "catch.hpp"

#include "Array.h"
#include "Search.h"

/**
 * UnOrdered Search Axioms
 */
TEST_CASE("UnOrdered Search Axioms", "[Search]")
{
	// arrange an ordered 10 element array
	Array<int> ua(10);
	ua[0] = 5; ua[1] = 10; ua[2] =  3; ua[3] = 11; ua[4] =  7; 
	ua[5] = 9; ua[6] =  3; ua[7] = 18; ua[8] =  5; ua[9] = 20;

	Array<int> ub(10);
	ub[0] = 1; ub[1] = 1; ub[2] = 3; ub[3] = 3; ub[4] = 7;
	ub[5] = 9; ub[6] = 11; ub[7] = 12; ub[8] = 14; ub[9] = 20;

	//Arrange a 5 element array
	Array<int> items(5);
	items[0] = 3; items[1] = 2; items[2] = 7; items[3] = 5; items[4] = 9;

	//Arrange a 2 element array
	Array<int> key1(2);
	key1[0] = 3; key1[1] = 5;
	
	//Arrange a 3 element array
	Array<int> key2(3);
	key2[0] = 3; key2[1] = 5; key2[1] = 8;

	//Fill empty array of 5 elements
	Array<int> test(5);

	SECTION("Sequential Search Success")
	{
		//assert that 5 is found at position 0
		REQUIRE(sequentialSearch<int>(ua,5) == 0);

		// assert that 20 is found at postion 9
		REQUIRE(sequentialSearch<int>(ua, 20) == 9);
	}

	SECTION("Sequential Search Failure")
	{
		//assert that 100 is not found 	
		REQUIRE(sequentialSearch<int>(ua, 100) == -1);
	}

	SECTION("Count occurence exists")
	{
		//assert that 3 is found twice	
		REQUIRE(countOccurrence<int>(ua, 3) == 2);
	}

	SECTION("Count ordered occurence exists")
	{
		//assert that 3 is found twice	
		REQUIRE(countOccurrenceOrdered<int>(ub, 3) == 2);
	}

	SECTION("Count occurence non existent")
	{

		//assert that counting occurrence of 100 returns 0	
		REQUIRE(countOccurrence<int>(ua, 100) == 0);

	}

	SECTION("Binary Search Success")
	{
		//assert that 5 is found at position 0
		REQUIRE(binarySearch<int>(ua, 5) == 0);

		// assert that 20 is found at postion 9
		REQUIRE(binarySearch<int>(ua, 20) == 9);
	}

	SECTION("Binary Search Failure")
	{
		//assert that 100 is not found 	
		REQUIRE(binarySearch<int>(ua, 100) == -1);
	}

	SECTION("Sequential Search Iteratons")
	{
		//assert
		REQUIRE(sequentialSearch<int>(ua, 20) == 9);
	}

	SECTION("Binary Search Iteratons")
	{
		//assert
		REQUIRE(binarySearch<int>(ua, 20) == 9);
	}

	SECTION("Array not ordered")
	{
		//assert
		REQUIRE(isOrdered<int>(ua) == false);
	}

	SECTION("Array ordered")
	{
		//assert
		REQUIRE(isOrdered<int>(ub) == true);
	}

	SECTION("Key1 is contained in Items")
	{
		//assert
		REQUIRE(containsAll<int>(items, key1) == true);
	}

	SECTION("Key2 is contained in Items")
	{
		//assert
		REQUIRE(containsAll<int>(items, key2) == false);
	}

	SECTION("Fill array from file")
	{
		//assert
		loadFromFile<int>(test, "test.txt");
	}




}

// add additional test cases for other algorithms

