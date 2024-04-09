#ifndef FUNCTION_H
#define FUNCTION_H

struct FarmTool {
    char name[100];
    char material[50];
    char date[20];
    int units;
};

void populateFarmTools(struct FarmTool *farmToolsArray, int arraySize);
void printFarmTools(struct FarmTool *farmToolsArray, int arraySize);

#endif

