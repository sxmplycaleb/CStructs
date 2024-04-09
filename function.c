#include <stdio.h>
#include "function.h"

// Function to populate the structure array
void populateFarmTools(struct FarmTool *farmToolsArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Farm Tool %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", farmToolsArray[i].name); // Assuming name does not contain spaces
        printf("Material: ");
        scanf("%s", farmToolsArray[i].material); // Assuming material does not contain spaces
        printf("Date: ");
        scanf("%s", farmToolsArray[i].date); // Assuming date does not contain spaces
        printf("Units: ");
        scanf("%d", &farmToolsArray[i].units);
    }
}

// Function to print the structure elements
void printFarmTools(struct FarmTool *farmToolsArray, int arraySize) {
    printf("\nFarm Tools Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Farm Tool %d:\n", i + 1);
        printf("Name: %s\n", farmToolsArray[i].name);
        printf("Material: %s\n", farmToolsArray[i].material);
        printf("Date: %s\n", farmToolsArray[i].date);
        printf("Units: %d\n", farmToolsArray[i].units);
    }
}

