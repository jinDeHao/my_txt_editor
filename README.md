String Manipulation Program

This program, developed by Omar Id Hmaid, allows users to manipulate strings by performing two types of operations: character replacement and character removal. Users can enter a string and choose an operation to apply. The program provides a command-line interface for interacting with the user.

Features

    Character Replacement: The program allows users to replace a specific character in the input string with a new character.
    Character Removal: Users can remove a specific character or all occurrences of a particular character from the input string.

Usage

    Run the program.
    Enter a string when prompted.
    Choose the desired operation:
        To replace a character, enter "rp" followed by the character to be replaced and the replacement character.
        To remove a character, enter "no" followed by the character to be removed.
    The program will display the modified string after applying the operation.
    Repeat the process to perform additional operations on the string.

Note: To exit the program, enter ":q!".
Dependencies

    The program is written in C and requires a C compiler to build and execute.
    Standard libraries used: stdio.h, string.h, unistd.h, stdlib.h, signal.h.

Build and Run

    Clone the repository or download the source code.
    Compile the program using a C compiler. For example:

`gcc omar.h fun.c txtmain.c -o omar_str_mani`

Run the executable:

    `./omar_str_mani`

Contributing

Contributions to the program are welcome. If you encounter any issues or have suggestions for improvement, please open an issue or submit a pull request.
License

This program is licensed under the MIT License. Feel free to use, modify, and distribute it as per the terms of the license.
