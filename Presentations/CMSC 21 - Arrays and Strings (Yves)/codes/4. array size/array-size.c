#include <stdio.h>

void main() {
    
    // declaration of array
    int myArray1[4] = {0, 1, 2, 3};

    // print values
    printf("The overall size of myArray1 is %li bytes.\n", sizeof(myArray1));
    printf("The size of a single element of 'int' is %li bytes.\n", sizeof(myArray1[0]));
    printf("\nTherefore, the array has %li\\%li = %li elements.", sizeof(myArray1), sizeof(myArray1[0]), sizeof(myArray1)/sizeof(myArray1[0]));

}