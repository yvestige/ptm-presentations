#include <unistd.h>

/// @brief Linked list implementation of string (abstract)
typedef struct {
    char character_value;
    CHARACTER_NODE* next;
} CHARACTER_NODE;

void next_ptr_p(const char* str) { 
    // This is just an abstraction!! This won't actually work.   
    CHARACTER_NODE* current_letter = str;
    while ((current_letter) != NULL) {
        write(STDOUT_FILENO, str, 1);
        current_letter = current_letter->next;
    }
}       
