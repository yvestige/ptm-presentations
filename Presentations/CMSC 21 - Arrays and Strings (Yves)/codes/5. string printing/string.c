#include <stdio.h>
#include <strings.h>

int main() {

    // character array 
    char char_array[] = {'w', 'o', 'r', 'd'};

    // string
    char string[] = "word";

    // print notification
    printf("Note: arrays are initialized as below:\n");
    printf("char char_array[] = {'w', 'o', 'r', 'd'};\n");
    printf("char string[] = \"word\";\n\n");
    printf("Printing out normally:\n");

    // print out char array
    printf("char_array[]: %s\n", char_array);
    
    // print out string
    printf("string[]: %s\n", string);

    
}