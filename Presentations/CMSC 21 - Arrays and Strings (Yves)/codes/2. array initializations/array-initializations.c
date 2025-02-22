#include <stdio.h>
#include <stdlib.h>

void main() {

    // previous declarations for reference later
    int empty = 0;
    int box = 1;
    int bottle = 2;
    int green_folders = 3;
    int i, index;
    int acquired_item;

    // this contains all the items of previous example
    int container[7] = {0, box, 0, 0, bottle, 0, 0};

    // custom length array
    int *customArray = (int*) malloc(sizeof(int) * 9);

    // sample array
    int arrayName[5] = {0, 1, 2, 3, 4};

    arrayName[0] = 0;

    // Part 1: initializations

    // 1. declaration with initialization
    int myArray1[5] = {0, 1, 2, 3, 4};

    // 2. declaration with iterative value placement
    int myArray2[5];
    for (int i=0; i<5; i++) {
        myArray2[i] = i;
    }


    // Part 2: Accessing/Modifying values

    // going through each of the items earlier
    for (int i=0; i<7; i++) {

        // accessing array[] value for comparison
        if (container[i] == green_folders) {

            // putting array[] value to other variable
            acquired_item = container[i];

            // editing array[] specific value
            container[i] = empty;   
            break;
        }
    }


    // Before exiting, clean m-allocated values
    free(customArray);

}