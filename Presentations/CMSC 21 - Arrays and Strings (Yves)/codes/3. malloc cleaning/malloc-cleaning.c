#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void main() {

    // custom length array
    int *customArray = (int*) malloc(sizeof(int) * 9);

    // print notification
    printf("Created memory-allocated array.\n");
    
    // put sample values to it
    for (int i=0; i<9; i++) {
        customArray[i] = i*i;
    }

    // print notification
    printf("Placed values inside memory-allocated array.\n");
   
    // This is how to clean m-allocated values
    free(customArray);

    // print notification
    printf("Cleaned memory-allocated array before exiting.\n");
}