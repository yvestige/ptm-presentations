#!/bin/bash

# This helper script is authored and created by John Yves Baltazar,
# made with the assistance of the famous AI tool ChatGPT,
# just to make navigation of peer tutor materials easier for you.

# clear the screen
clear

# Flag to track if the script has already run
script_run=false

# main function
select_file() {
    # Check if the script has already run
    if [ "$script_run" = true ]; then
        echo "Script has already been executed. Exiting..."
        exit
    fi

    # Set the flag to true to indicate that the script has run
    script_run=true

    # notification print-out
    echo $'\nSelect a Python file to run:'

    # proceed to ask for choice
    PS3=$'\nOption: '
    
    # put choices here
    choices=()
    
    # Populate choices array with base filenames sorted alphabetically
    while IFS= read -r -d '' file; do
        base_filename=$(basename "$file")
        choices+=("$base_filename")
    done < <(find . -type f -name "*.py" -print0 | sort -z)

    # add last choice for quitting/exiting
    choices+=("Quit/Exit")

    # switch-case for choice
    select choice in "${choices[@]}"; do
        case $REPLY in

            # if quit option
            ${#choices[@]})
                echo $'\nExiting...\n'
                exit;;

            # if anything other than quit option
            *)

                # if invalid
                if [ -z "$choice" ]; then
                    echo "Invalid choice. Please try again."
                
                # if valid
                else
                    # Get the full path for execution
                    py_file=$(find . -type f -name "$choice" -print -quit)
                    run_python_script "$py_file"
                    break  # Exit the loop after making a selection
                fi;;
        esac
    done
}

# function that runs a Python script 
run_python_script() {
    
    # reference for the chosen Python file
    py_file="$1"
    base_filename=$(basename "$py_file")

    # print notifications
    echo $'—————————————————————————————————————————————————'
    echo $'Running Python script: '"$base_filename"
    echo $'—————————————————————————————————————————————————\n'

    # execute the Python script
    python3 "$py_file"

    # print it's finished
    echo $'\n—————————————————————————————————————————————————'
    echo $'\nThe Python script has finished running.\n'
}

# Main script
select_file
