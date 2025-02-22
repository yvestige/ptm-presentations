def main():
    
    # previous declarations for reference later
    empty = 0
    box = 1
    bottle = 2
    green_folders = 3
    acquired_item = None

    # 1. declaration with initialization
    container = [0, box, 0, 0, bottle, green_folders, 0]

    # custom length list
    custom_list = [0] * 9
    custom_list_1 = [] # empty

    print(custom_list)
    
    # sample list
    list_name = [
        
        # typical datatypes
        0, 1, "string", 'c', 4.04123,
        
        # another list
        ["another", "list"],
        
        # another dictionary
        {"key1": "value1", "key2": 12345}
    ]

    # sample modify value
    list_name[0] = 0

    # Part 1: initializations

    # 1. declaration with initialization
    my_list1 = ['a', 'b', 'c', 'd', 'e', 'f', ' ', 'g']

    # example of string
    string = "abcdef g"

    # 2. declaration with iterative value placement
    my_list2 = []
    for i in range(5):
        my_list2.append(i)

    # Part 2: Accessing/Modifying values

    # going through each of the items earlier
    for i in range(7):

        # accessing list value for comparison
        if container[i] == green_folders:

            # putting list value to other variable
            acquired_item = container[i]

            # editing list specific value
            container[i] = empty
            break

    listName = []
    
    index = 1
    
    listName[index]
    
    print(listName)
    
    # appending lists
    container.append(bottle)

# gets the value of a number given an exponent
def power(base, exponent):
    
    # Base case: if exponent is 0, return 1
    if exponent == 0:
        return 1
    
    # Recursive case: multiply base by itself (exponent - 1) times
    else:
        return base * power(base, exponent - 1)

if __name__ == "__main__":
    power(10, 2)



