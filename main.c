#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 7;
    struct FarmTool farmToolsArray[arraySize];

    // Populate the structure array
    populateFarmTools(farmToolsArray, arraySize);

    // Print the structure elements
    printFarmTools(farmToolsArray, arraySize);

    return 0;
}

