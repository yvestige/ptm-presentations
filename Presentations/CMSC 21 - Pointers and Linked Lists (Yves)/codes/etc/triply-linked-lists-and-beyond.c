

// Structure for a person (singly-linked list styler)
typedef struct Person_sll {
    char name[100];             // name of person
    int age;                    // age of person
    struct Person_sll *front;    // pointer to front person
} PERSON_SLL;





// Structure for a person (doubly-linked list styler)
typedef struct Person_dll {
    char name[100];             // name of person
    int age;                    // age of person
    struct Person_dll *front;    // pointer to front person
    struct Person_dll *back;    // pointer to previous person   
} PERSON_DLL;





// Structure for a person (triply-linked list styler)
typedef struct Person_tll {
    char name[100];             // name of person
    int age;                    // age of person
    struct Person_dll *front;   // pointer to front person
    struct Person_dll *back;    // pointer to previous person    
    struct Person_tll *fav;     // pointer to their favorite person
} PERSON_TLL;                       // (can be different address)





// Structure for a person (quadruply-linked list styler)
typedef struct Person_quad_ll {
    char name[100];                 // name of person
    int age;                        // age of person
    struct Person_quad_ll *front;   // Pointer to the front song in the playlist
    struct Person_quad_ll *back;    // Pointer to the previous song in the playlist
    struct Person_quad_ll *fav;     // pointer to their favorite person
    struct Person_quad_ll *bff;     // pointer to their bff
} PERSON_QUAD_LL;





// Structure for a person (quintuply-linked list styler)
typedef struct Person_quint_ll {
    char name[100];                  // name of person
    int age;                         // age of person
    struct Person_quint_ll *front;   // Pointer to the front song in the playlist
    struct Person_quint_ll *back;    // Pointer to the previous song in the playlist
    struct Person_quint_ll *fav;     // pointer to their favorite person
    struct Person_quint_ll *bff;     // pointer to their bff
    struct Person_quint_ll *so;      // pointer to their significant other
} PERSON_QUINT_LL;

