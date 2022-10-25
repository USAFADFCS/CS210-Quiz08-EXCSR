/** quiz08functs.c
* ===========================================================
*    Name: 
* Section:
* Purpose: Quiz 8
* ===========================================================
*/

#include "quiz08functs.h"
#include <stdio.h>
#include <stdlib.h>

// This function is being provided to you.  Do Not Touch!
int loadCarInventory(Car* carInventory, int numToRead) {
    FILE* inFile = fopen("cars.bin", "rb");
    int numCars = fread(carInventory, sizeof(Car), numToRead, inFile);
    fclose(inFile);
    return numCars;
}

// YOUR CODE GOES HERE
