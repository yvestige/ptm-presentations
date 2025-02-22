def main():
    # for the purpose of example, declare variables
    box = 1
    bottle = 2
    green_folders = 3
    empty = 0

    # this contains all the items
    container = [0, box, 0, 0, bottle, 0, 0]
    
    # acquired item will go here
    acquired_item = None # None = wala pa po

    # iterate through indices using length
    for i in range(len(container)):
        if container[i] == green_folders:
            acquired_item = container[i]
            container[i] = empty  # 0
            break
    
    # print notification of green folders
    if acquired_item == green_folders:
        print("*Tigershark grabs item*\nSuccess!")
    else:
        print("*Tigershark is confused*\nItem not found in container...")

# if not a module
if __name__ == "__main__":
    main()
