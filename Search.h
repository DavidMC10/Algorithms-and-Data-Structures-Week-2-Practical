/**
 * Search.h
 *
 * Template based Search Functions
 *
 * @author  Your name
 * @email   your email
 * @version 1.0
 */

#ifndef SEARCH_H_
#define SEARCH_H_

#include "Array.h"

// PreCondition: items Array is full
// PostCondition: return position if key found, otherwise -1
template <class T>
int sequentialSearch( const Array<T> & items, const T & key ) {

	int count = 0;
	// Loops through each array element to find the key
	for (int i = 0; i < items.length(); i++) {

		count++;

		if (key == items[i]) {
			
			std::cout << "Sequential Search: [ ";
			
			for (int i = 0; i < items.length(); i++) {
				std::cout << items[i] << " ";
			}

			std::cout << "] for " << key << " took " << count << " passes" << std::endl;

			return i;
		}
	}
	return -1;
}

// PreCondition: items Aarray is full
// PostCondition: return position if key found, otherwise -1
template <class T>
int binarySearch(const Array<T> & items, const T & key) {

	int low = 0;
	int high = items.length() - 1;

	std::cout << "Binary Search: [ ";
	for (int i = 0; i < items.length(); i++) {
		std::cout << items[i] << " ";
	}
	std::cout << "] for " << key << std::endl;

	// While element is not found.
	while (low <= high) {

		int middle = low + (high - low) / 2;

		// If the element is larger than middle, it can only be present in the right subarray
		if (items[middle] < key)
			low = middle + 1;

		// If element is smaller than middle, it can only be present in the left subarray
		if (items[middle] > key)
			high = middle - 1;

		// Returns position
		if (items[middle] == key)
			return middle;

		std::cout << "Left=" << low << " Pivot=" << middle << " Right=" << high << std::endl;
	}
	return -1;
}

// PreCondition: Data array is full
// PostCondition: return number of occurences of items in Array
template <class T>
int countOccurrence(const Array<T> & items, const T & key) {
	
	int count{ 0 };
	int comparisons{ 0 };
	for (int i = 0; i < items.length(); i++) {
		comparisons++;
		if (key == items[i]) {
			count++;
		}
	}

	std::cout << "Count for " << key << " in [ ";
	for (int i = 0; i < items.length(); i++) {
		std::cout << items[i] << " ";
	}
	std::cout << "] took " << comparisons << " comparisons" << std::endl;

	return count;
}

// PreCondition: Array is filled with ordered values of type T
// PostCondition: return number of occurrences of key in array items
template <class T>
int countOccurrenceOrdered(const Array<T> & items, const T & key) {
	
	int count{ 0 };
	int comparisons{ 0 }; 
	for (int i = 0; i < items.length(); i++) {
		if (key == items[i]) {
			comparisons = i + 1;
			count++;
		}
	}


	std::cout << "Count for " << key << " in [ ";
	for (int i = 0; i < items.length(); i++) {
		std::cout << items[i] << " ";
	}
	std::cout << "] took " << comparisons << " comparisons" << std::endl;

	return count;
}

// PreCondition: Both Arrays are filled with values of type T. 
//               items - values to be searched. keys - values to search for
// PostCondition: return true if all keys are found, otherwise false
template <class T>
bool containsAll(const Array<T> & items, const Array<T> & keys) {
	return false;
}

// PreCondition: Array is filled with values of type T.
// PostCondition: return true array elements are ordered and false otherwise
template <class T>
bool isOrdered(const Array<T> & items) {
	
	for (int i = 0; i < items.length() - 1; i++) {
		
		if (items[i] > items[i + 1]) {
			return false;
		}
	}
	return true;
}



#endif	/* SEARCH_H_ */