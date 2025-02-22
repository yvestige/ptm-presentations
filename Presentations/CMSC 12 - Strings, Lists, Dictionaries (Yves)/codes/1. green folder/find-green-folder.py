def main():
    # for the purpose of example, declare variables
    box = 1
    bottle = 2
    green_folders = 3
    empty = 0

    # this contains all the items
    container = [0, box, 0, 0, bottle, green_folders, 0]
    
    # acquired item will go here
    acquired_item = None # None = wala pa po

    # iterate through indices based on the length of the container
    for i in range(len(container)):
        
        # check if current item is the green folders
        if container[i] == green_folders:
            
            # access value in specific box
            acquired_item = container[i]
            
            # stop the loop
            break
    
    # print notification of green folders
    if acquired_item == green_folders:
        print("*Tigershark grabs item*\nSuccess!")
    else:
        print("*Tigershark is confused*\nItem not found in container...")

# if not a module
if __name__ == "__main__":
    main()
