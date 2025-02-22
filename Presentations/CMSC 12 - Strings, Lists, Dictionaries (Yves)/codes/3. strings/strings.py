
# for concatenation of string
def concatenate_strings():
    str1 = input("Enter the first string: ")
    str2 = input("Enter the second string: ")
    str1 = str1 + " " + str2
    print("Concatenated string: ", str1)

# for length
def calculate_length():
    my_string = input("Enter a string: ")
    length = len(my_string)
    print("Length of the string: ", length)

# for indexing
def access_character_by_index():
    my_string = input("Enter a string: ")
    index = int(input("Enter the index to access: "))
    if 0 <= index < len(my_string):
        char = my_string[index] # see how similar to list?
        print(f"Character at index {index}: {char}")
    else:
        print("Invalid index.")

# for split()
def split_string():
    my_string = input("Enter a string: ")
    delimiter = input("Enter the delimiter: ")
    split_list = my_string.split(delimiter)
    print("Split string: ", split_list)
    
    # # this is for "this"
    # split_list[0]
    
    # # this is for "this"
    # split_list[0][0] # = 't'
    
    
# for capitalizing all
def convert_to_uppercase():
    my_string = input("Enter a string: ")
    uppercase_string = my_string.upper()
    print("Uppercase string: ", uppercase_string)

# for making all letters small
def convert_to_lowercase():
    my_string = input("Enter a string: ")
    lowercase_string = my_string.lower()
    print("Lowercase string: ", lowercase_string)
    
def main():
    while True:
        print("\nMenu:")
        print("1. Concatenate strings")
        print("2. Calculate length of a string")
        print("3. Access character by index")
        print("4. Split string")
        print("5. Convert string to uppercase")
        print("6. Convert string to lowercase")
        print("7. Exit")

        choice = input("Enter your choice: ")

        if choice == '1':
            concatenate_strings()
        elif choice == '2':
            calculate_length()
        elif choice == '3':
            access_character_by_index()
        elif choice == '4':
            split_string()
        elif choice == '5':
            convert_to_uppercase()
        elif choice == '6':
            convert_to_lowercase()
        elif choice == '7':
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()
