This C program is a simple console-based voting system designed for the 2024 elections. It includes functions for welcoming users, displaying party information, and presenting instructions. Below is a detailed breakdown of the code structure and functionality.

Project Structure
Header Files:

stdio.h: Standard input-output library for functions like printf and getchar.
stdlib.h: Includes functions for memory allocation, process control, and conversions.
time.h: Provides functions for manipulating date and time.
Custom header files:
Strings.c: Likely contains string constants used throughout the program .
voterid.c: Contains functions related to voter ID processing .
votingscreen.c: This file is commented out, possibly planned for future inclusion 
Functions:

welcome():
Clears the console and displays a welcome message for the election.
Uses sleep(6) to pause for 6 seconds before clearing the screen again.
party():
Displays candidate information, including the candidate's name, party affiliation, and party symbol.
Clears the screen after a 5-second pause.
message():
Displays instructions for using the voting system.
Clears the screen afterwards.
Main Function:

The program starts execution here.
Calls the message() function to show instructions.
Waits for user input with getchar() before clearing the screen.
Calls mainscreen() from the voterid.c file, which presumably initiates the voter ID process or the main voting interface.
Code Functionality
The program is structured to guide the user through the voting process in an organized manner.
It features a welcoming interface that presents the election theme and the parties running.
Each function is designed to enhance user experience with clear, structured outputs and pauses for readability.
