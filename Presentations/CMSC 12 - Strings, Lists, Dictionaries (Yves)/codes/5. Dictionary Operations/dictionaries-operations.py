
# for accessing values
def access_values_with_checker(my_dict):
    key = input("Enter the key to try accessing its value: ")
    value = my_dict.get(key)
    if value is not None:
        print("Value:", value)
    else:
        print("Key not found in dictionary")

# for updating values
def add_or_update_values(my_dict):
    key = input("Enter the key: ")
    value = input("Enter the value: ")
    my_dict[key] = value
    print("Key-value pair added/updated successfully")

# for removing items
def remove_items(my_dict):
    key = input("Enter the key to remove: ")
    if key in my_dict:
        del my_dict[key]
        print("Key-value pair removed successfully")
    else:
        print("Key not found in dictionary")

# for checking if item exists
def check_if_item_exists(my_dict):
    key = input("Enter the key to check membership: ")
    
    # my_dict = {"name": "John", "age": 30, "city": "New York"}
    if key in my_dict:
        print("Key exists in the dictionary")
    else:
        print("Key does not exist in the dictionary")

# for iterating items and keys of dictionary
def iterate_over_items(my_dict):
    print("Iterating over key-value pairs:")
    for key, value in my_dict.items():
        print(key, " : ", value)

# for getting length of dictionary
def get_length(my_dict):
    print("Number of key-value pairs:", len(my_dict))

# menu for displaying
def display_menu():
    print("Menu:")
    print("1. Try Accessing Specific Values")
    print("2. Add or Update Values")
    print("3. Remove Items")
    print("4. Check Membership")
    print("5. Iterate Over Items")
    print("6. Get Length")
    print("7. Exit\n")

# main
def main():
    my_dict = {"name": "John", "age": 30, "city": "New York"}
    
    while True:
        display_menu()
        choice = input("Enter your choice: ")
        
        if choice == "1":
            access_values_with_checker(my_dict)
        elif choice == "2":
            add_or_update_values(my_dict)
        elif choice == "3":
            remove_items(my_dict)
        elif choice == "4":
            check_if_item_exists(my_dict)
        elif choice == "5":
            iterate_over_items(my_dict)
        elif choice == "6":
            get_length(my_dict)
        elif choice == "7":
            print("Exiting the program...")
            break
        else:
            print("Invalid choice. Please enter a number between 1 and 7.")

if __name__ == "__main__":
    main()
