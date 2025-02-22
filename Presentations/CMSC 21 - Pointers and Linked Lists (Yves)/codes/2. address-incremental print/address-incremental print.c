#include <unistd.h>

/// @brief Function that prints by incrementing address.
/// @param str constant pointer for a string.
void address_incremental_print(const char* str);

int main() {

    // character array 
    char char_array[] = {'w', 'o', 'r', 'd'};

    // string
    char string[] = "word";

    // print out notification
    address_incremental_print("char_array[]: ");

    // print out char array
    address_incremental_print(char_array);
    

    // print out notification
    address_incremental_print("\nstring[]: ");

    // print out string array
    address_incremental_print(string);    
}


/// @brief Function that prints by incrementing address.
/// @param str constant pointer for a string.
void address_incremental_print(const char* str) {

    // Iterate over the characters of the string 
    // until the null terminator is encountered
    while (*str != '\0') {
        
        // print character at current address to terminal
        write(STDOUT_FILENO, str, 1);

        // Move to the next character, address-wise
        str++;
    }
}
/// @brief same function as address_incremental_print, pinaliit ko lang name para malaki sa ppt 
void addr_incrmnt_p(const char* str) {
    while (*str != '\0') {
        write(STDOUT_FILENO, str, 1);
        str++;
    }
}
