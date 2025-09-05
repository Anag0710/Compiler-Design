# Exp4_1.c - Character Frequency Counter

This C program counts the number of times a specified character appears in a text file.

## How It Works
- The program prompts the user to enter a character to search for.
- It opens the file `Test.c` for reading.
- It counts how many times the specified character appears in the file.
- The result is displayed to the user.

## Usage
1. Make sure you have a file named `Test.c` in the same directory as the program.
2. Compile the program using GCC:
   ```sh
   gcc Exp4_1.c -o Exp4_1.exe
   ```
3. Run the program:
   ```sh
   ./Exp4_1.exe
   ```
4. Enter the character you want to search for when prompted.

## Notes
- If `Test.c` does not exist, the program will display an error message.
- The search is case-sensitive.

## Example Output
```
Enter the character to find: a
The character 'a' appears 5 times
```
