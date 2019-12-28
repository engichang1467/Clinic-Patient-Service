/*
 * List.cpp
 * 
 * Class Description: List data collection ADT.
 * Class Invariant: Data collection with the following characteristics:
 *                   - Each element is unique (no duplicates).
 *                   - (What other characteristic does our List have?)
 *
 * Author: Michael Chang
 * Date: January 22, 2019
 */

#include <string>
#include <iostream>
#include "Patient.h"
#include "List.h"

using namespace std;

// Default constructor
List::List()
{
	elementCount = 0;
}

// Description: Returns the total element count currently stored in List.
int List::getElementCount() const
{
	return elementCount;
}

// Description: Insert an element.
// Precondition: newElement must not already be in data collection.  
// Postcondition: newElement inserted and elementCount has been incremented.   
bool List::insert(const Patient& newElement)
{
	int j = 0;
	bool toCheck = true;

	while (j < elementCount)
	{
		if (elements[j].getCareCard() == newElement.getCareCard())
		{
			// it won't insert the newElement
			toCheck = false;
			return toCheck;
		}
		j++;
	}
	elements[elementCount] = newElement;
	elementCount++;
	return toCheck;
}

// Description: Remove an element. 
// Postcondition: toBeRemoved is removed and elementCount has been decremented.	
bool List::remove( const Patient& toBeRemoved )
{
	for (int k = 0; k < elementCount; k++)
	{
		if (elements[k].getCareCard() == toBeRemoved.getCareCard())
		{
			// start from the index where we find the identical carecard number
			for (int x = k; x < (elementCount - 1); x++)
			{
				elements[x] = elements[x + 1]; // copy the next patients into the current index
			}
			elementCount--;
			return true;
		}
	}
	return false;	
}

// Description: Remove all elements.
void List::removeAll()
{
	elementCount = 0;
}

// Description: Search for target element.
//              Returns a pointer to the element if found,
//              otherwise, returns NULL.
Patient* List::search(const Patient& target)
{
	for (int l = 0; l < elementCount; l++)
	{
		if (elements[l].getCareCard() == target.getCareCard())
			return &elements[l];
	}
	return NULL;

}

// Description: Prints out each patient's data
void List::printEverything()
{
	for (int i = 0; i < elementCount; i++)
		cout << elements[i];
	cout << endl;
}

