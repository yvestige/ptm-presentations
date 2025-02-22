
# Script Usage Documentation

## Overview
These scripts (`run.c.sh` and `run.py.sh`) are designed to simplify the process of compiling and executing C and Python files respectively. They provide a user-friendly interface for selecting the desired file to run within the current directory and its subdirectories.

## Prerequisites
- Linux or Ubuntu environment
- GCC compiler for C files
- Python interpreter for Python files

## Usage

### For `run.c.sh`

#### Step 1: Make the Script Executable
Ensure that the script has executable permissions. If not, grant the necessary permissions using the following command:

```bash
chmod +x run.c.sh
```

#### Step 2: Run the Script
Execute the script using the following command:

```bash
./run.c.sh
```

#### Step 3: Select a C File
The script will display a list of C files found in the current directory and its subdirectories. Select the desired file by entering its corresponding number.

#### Step 4: Compilation and Execution
The selected C file will be compiled using the GCC compiler. If the compilation is successful, the program will be executed, and the output will be displayed. If there are any compilation errors, they will be reported.

#### Step 5: Repeat or Exit
After the program finishes execution, you will have the option to select another C file or exit the script.

### For `run.py.sh`

#### Step 1: Make the Script Executable
Ensure that the script has executable permissions. If not, grant the necessary permissions using the following command:

```bash
chmod +x run.py.sh
```

#### Step 2: Run the Script
Execute the script using the following command:

```bash
./run.py.sh
```

#### Step 3: Select a Python File
The script will display a list of Python files found in the current directory and its subdirectories. Select the desired file by entering its corresponding number.

#### Step 4: Execution
The selected Python file will be executed using the Python interpreter, and the output will be displayed.

#### Step 5: Repeat or Exit
After the program finishes execution, you will have the option to select another Python file or exit the script.

## Additional Notes
- These scripts are designed to be used in a Linux or Ubuntu environment. If using Windows, consider using Windows Subsystem for Linux (WSL).
- Ensure that you have the necessary permissions to compile and execute files in the specified directory.
- The scripts provide a user-friendly interface for selecting files, compiling (for C files), and executing them, thereby simplifying the process for users.