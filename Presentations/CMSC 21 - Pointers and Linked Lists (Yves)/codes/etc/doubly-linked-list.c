#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define RANDOM_STRING "R2390FV00_40RT3HAA@@T4"

// Structure for a song
typedef struct Song {
    char title[100];   // Title of the song
    char artist[100];  // Artist of the song
    float duration;    // Duration of the song in minutes
    int year;          // Release year of the song
    struct Song *next; // Pointer to the next song in the playlist
    struct Song *prev; // Pointer to the previous song in the playlist
} SONG;


// Prototype of functions we will discuss

SONG* createSong(const char *title, const char *artist, float duration, int year);
void printPlaylist(SONG *head);
void deletePlaylist(SONG *head);
void appendSong(SONG **head, SONG *newSong);
void addSongMenu(SONG **head);
int getTotalSongs(SONG *head);
int getSongNumber(SONG *head, SONG *currentSong);
SONG *deleteSongMenu(SONG **head);


// Prototype of functions not necessary to discuss

SONG* create_temporary_songs();

// main function of course.
int main() {

    // Create a playlist
    SONG *head = NULL;

    // assign temporary songs
    head = create_temporary_songs();

    // Set the current song to the first song
    SONG *currentSong = head;

    // some other variables required
    SONG *temp1, *temp2;

    // Print the playlist
    printf("Current Playlist:\n\n");
    printPlaylist(head);

    // Interactive menu for playing songs
    int choice;
    do {
        printf("\n\nCurrently Playing: %s - %s [%d/%d]\n\n", currentSong->title, currentSong->artist, getSongNumber(head, currentSong), getTotalSongs(head));
        printf("Menu:\n");
        printf("1. Next song\n");
        printf("2. Previous song\n");
        printf("3. Add a new song\n");
        printf("4. Delete a song\n");
        printf("5. Print the playlist\n");
        printf("6. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear the input buffer

        switch(choice) {
            case 1:
                if (currentSong->next != NULL) {
                    currentSong = currentSong->next;
                } else {
                    printf("\nEnd of playlist reached.");
                }
                break;
            case 2:
                if (currentSong->prev != NULL) {
                    currentSong = currentSong->prev;
                } else {
                    printf("\nBeginning of playlist reached.");
                }
                break;
            case 3:
                addSongMenu(&head);
                break;
            case 4:
                memcpy(temp1, currentSong, sizeof(SONG));
                temp2 = deleteSongMenu(&head);
                if (temp1 == temp2) currentSong = head;
                break;
            case 5:
                printf("\nPlaylist:\n");
                printPlaylist(head);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);


    // Delete the playlist to free memory
    deletePlaylist(head);

    return 0;
}


/// @brief Creates temporary songs.
/// @return returns reference to the first song instantiated.
SONG* create_temporary_songs() {

    // Create songs
    SONG *song1 = createSong("Bohemian Rhapsody", "Queen", 5.92, 1975);
    SONG *song2 = createSong("Stairway to Heaven", "Led Zeppelin", 8.03, 1971);
    SONG *song3 = createSong("Hotel California", "Eagles", 6.30, 1977);
    SONG *song4 = createSong("Imagine", "John Lennon", 3.03, 1971);

    // Link the songs
    song1->next = song2;
    song2->next = song3;
    song3->next = song4;
    song4->next = NULL;

    song1->prev = NULL;
    song2->prev = song1;
    song3->prev = song2;
    song4->prev = song3;

    // return first song
    return song1;
}

/// @brief Function to create a new song.
/// @param title Title of the song.
/// @param artist Artist of the song.
/// @param duration Duration of the song in minutes.
/// @param year Release year of the song.
/// @return Pointer to the newly created song.
SONG* createSong(const char *new_title, const char *new_artist, float new_duration, int new_year) {
    
    // Allocate memory for the new song
    SONG *newSongInstance = (SONG*) malloc(sizeof(SONG));
    if (newSongInstance == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    // Set the song details
    strcpy(newSongInstance->title, new_title);
    strcpy(newSongInstance->artist, new_artist);
    newSongInstance->duration = new_duration;
    newSongInstance->year = new_year;
    newSongInstance->next = NULL;
    newSongInstance->prev = NULL;

    return newSongInstance;
}

/// @brief Function for appending new song.
/// @param head Reference to the start of the playlist.
/// @param newSong New song to be added.
void appendSong(SONG **head, SONG *newSong) {
    
    // If playlist is empty, set new song as the head
    if (*head == NULL) {
        *head = newSong;
        return;
    }

    // Find the last song in the playlist
    SONG *lastSong = *head;
    while (lastSong->next != NULL) {
        lastSong = lastSong->next;
    }

    // Append the new song to the end
    lastSong->next = newSong;
    newSong->prev = lastSong;
}

/// @brief Function to print the playlist.
/// @param head Reference to the start of the playlist.
void printPlaylist(SONG *head) {
    
    // return immediately if null
    if (head == NULL) return;

    // variable declarations
    SONG *current = head;
    int count = 1;

    // Traverse the playlist and print each song
    while (current != NULL) {
        printf("Song [%d/%d]: %s - %s \n", count, getTotalSongs(head), current->title, current->artist);
        
        current = current->next;
        count++;
    }
}

// Function to delete the entire playlist
void deletePlaylist(SONG *head) {
    
    // variable declarations
    SONG *current = head;
    SONG *nextSong;

    // Traverse the playlist and free memory for each song
    while (current != NULL) {
        nextSong = current->next;
        free(current);
        current = nextSong;
    }
}

/// @brief Function to add a new song using a menu.
/// @param head Reference to the start of the playlist.
void addSongMenu(SONG **head) {
    char title[100];
    char artist[100];
    float duration;
    int year;

    // Prompt the user for song details
    printf("\nAdd a New Song\n");
    printf("Enter the title of the song: ");
    fgets(title, sizeof(title), stdin);
    title[strlen(title) - 1] = '\0'; // Remove the newline character
    printf("Enter the artist of the song: ");
    fgets(artist, sizeof(artist), stdin);
    artist[strlen(artist) - 1] = '\0'; // Remove the newline character
    printf("Enter the duration of the song (in minutes): ");
    scanf("%f", &duration);
    printf("Enter the release year of the song: ");
    scanf("%d", &year);

    // Clear the input buffer
    while (getchar() != '\n');

    // Create the new song and append it to the playlist
    SONG *newSong = createSong(title, artist, duration, year);
    appendSong(head, newSong);

    printf("Song added successfully!\n");
}

/// @brief Function to get the total number of songs in the playlist
/// @param head Reference to the start of the playlist.
/// @return Total number of the songs.
int getTotalSongs(SONG *head) {
    int totalSongs = 0;
    SONG *current = head;
    while (current != NULL) {
        totalSongs++;
        current = current->next;
    }
    return totalSongs;
}

/// @brief Function for getting the current song number.
/// @param head Reference to the start of the playlist.
/// @param currentSong Current song to be found.
/// @return Number of the song.
int getSongNumber(SONG *head, SONG *currentSong) {
    int songNumber = 1; // Start counting from 1
    SONG *current = head;
    while (current != NULL) {
        if (current == currentSong) {
            break;
        }
        current = current->next;
        songNumber++;
    }
    return songNumber;
}

// Function to delete a specific song from the playlist
SONG *deleteSongMenu(SONG **head) {

    // variable declarations
    SONG *return_value;
    char title[100];
    
    // Prompt the user for the title of the song to delete
    printf("\nDelete a Song\n");
    printf("Enter the title of the song to delete: ");
    fgets(title, sizeof(title), stdin);
    title[strlen(title) - 1] = '\0'; // Remove the newline character

    // variable declarations
    SONG *current = *head;
    SONG *prev = NULL;

    // Traverse the playlist to find the song with the given title
    while (current != NULL) {
        
        // If song is found
        if (strcmp(current->title, title) == 0) {
            
            // if this is the first item in playlist
            if (prev == NULL) {
                
                // set head to next song
                *head = current->next;
            
            // if song is not first item
            } else {
                
                // set "prev's" next pointer
                prev->next = current->next;

                // set next song's previous pointer (if exists) 
                // to song pointed by "prev" 
                if (current->next != NULL) {
                    current->next->prev = prev;
                }
            }

            // At this point, song has been unlinked or "deleted" successfully
            printf("Song '%s' deleted successfully!\n", title);

            return current;
        }

        // Move to the next song in the playlist
        prev = current;
        current = current->next;
    }

    // If the song with the given title is not found
    printf("Song '%s' not found in the playlist!\n", title);

    // return nothing
    return NULL;
}
