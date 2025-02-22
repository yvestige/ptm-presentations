#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/// @brief uses strcat() function.
void concatenateStrings() {

    // variable declarations
    char str1[100], str2[50];

    // get values
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // perform process
    strcat(str1, str2); // appends str2 to str1
    printf("Concatenated string: %s\n", str1);
}

/// @brief uses strlen() function.
void getStringLength() {

    // variable declarations
    char str[100];

    // get values
    printf("Enter a string: ");
    scanf("%s", str);

    // perform process
    int length = strlen(str);   // get length of string
    printf("Length of the string: %d\n", length);
}

/// @brief uses strcmp() function.
void compareStrings() {

    // variable declarations
    char str1[100], str2[100];

    // get values
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // perform process
    int result = strcmp(str1, str2);    // compares ASCII-wise
    if (result == 0) {
        printf("str1 is equal to str2\n");
    } else {
        printf("str1 is greater than str2\n");
    } 
}

/// @brief uses atoi() to convert the parseable-int string to int type.
void convertString() {

    // variable declarations
    char num_str[100];
    int num;

    // get values
    printf("Enter a numeric string: ");
    scanf("%s", num_str);

    // perform process
    num = atoi(num_str);    // converts parseable-int string to int type
    printf("Converted integer: %d\n", num);
}

/// @brief uses toupper() to make letter upper-case
void convertCase() {

    // variable declarations
    char str[100];

    // get values
    printf("Enter a string: ");
    scanf("%s", str);

    // perform process
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);   // convert character to its upper
    }
    printf("Uppercase string: %s\n", str);
}

int main() {

    // variable declaration
    int choice;

    // start of menu
    do {

        // display choices
        printf("\nString Operations Menu:\n");
        printf("1. Concatenate Strings\n");
        printf("2. String Length\n");
        printf("3. Compare Strings\n");
        printf("4. Convert String to Int\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // perform operation based on choice
        switch (choice) {
            case 1:
                concatenateStrings();
                break;
            case 2:
                getStringLength();
                break;
            case 3:
                compareStrings();
                break;
            case 4:
                convertString();
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 0 and 4.\n");
        }
    } while (choice != 0);

    // exit
    return 0;
}
