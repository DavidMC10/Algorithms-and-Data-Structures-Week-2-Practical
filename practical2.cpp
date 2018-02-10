//============================================================================
// Name        : practical2.cpp
// Author      : a.mccaughey@ulster.ac.uk
// Version     : 1.0
// Description : practical 2 - Searching
//============================================================================
#include "Array.h"
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>       /* time */
#include "Search.h" 

using namespace std;

// PreCondition: named file exists and contains integers
// PostCondition: array is loaded with integers read from
//                file and array is resized if necessary
void loadInts(..., string fname) {
	// replace ... with appropriate array parameter 
}

// PostCondition: array will be populated with random numbers in specified range 1..limit
void fillRandom( ... , int limit) {
	// replace ... with appropriate array parameter 
}

// PostCondition: array will be populated with ordered numbers in specified range 1..limit
void fillOrdered(..., int limit=100) {
	// replace ... with appropriate array parameter 
}

/**
 * Main Method
 */
int main() {
	
	Array<int> data(5);
	
	char opt;
	cout << endl << "1:Fill 2:Search 3:Count 0:Quit : ";
	cin >> opt;
	while (opt != '0')
	{
		if (opt == '1') {			
			// call fillRandom or fillOrdered function depending on
			// whether program is dealing with ordered or unordered arrays						
		} else if (opt == '2') {	// search			
			// enter search key and call either binary or sequential search
			// depending on whether array is ordered or unordered
		} else if (opt == '3') {	// count
			// enter search key and call either countOccurence or countOccurenceOrdered 
			// depending on whether array is ordered or unordered
		}
 
		cout << "1:Fill 2:Search 3:Count 0:Quit : ";
		cin >> opt;
	}

	// ---------------------------------------------------
	return 0;
}
