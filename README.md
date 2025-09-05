# Compiler Design Experiments

This repository contains C programs for various experiments related to compiler design, including file handling, keyword and operator counting, and text analysis.

## Directory Structure

```
.vscode/
    settings.json
Experiment 1/
    Exp1_1.c
    EXP1_2.c
    File Handling.c
Experiment 2/
    Keyword Counter.c
Experiment 3/
    Exp3_1.c
    Exp3_2.c
Experiment 4/
    a.exe
    Exp4_1.c
    Exp4_1.exe
    Exp4_2.c
    Test.txt
```

## Experiments

### Experiment 1
- **Exp1_1.c** / **EXP1_2.c**: Identify whether a given string is a C keyword.
- **File Handling.c**: Write data to a file (`Test.txt`).

### Experiment 2
- **Keyword Counter.c**: Count the total number of C keywords in a file (`Test.txt`).

### Experiment 3
- **Exp3_1.c** / **Exp3_2.c**: Count the number of operators in a file (`Test.txt`).

### Experiment 4
- **Exp4_1.c**: Count occurrences of a specific character in a file (`Test.txt`).
- **Exp4_2.c**: Count total characters, words, and lines in a file (`Test.txt`).

## How to Run

1. Open the desired `.c` file in your C compiler or IDE.
2. Make sure `Test.txt` is present in the same directory as the executable or source file if required.
3. Compile the program:
    ```sh
    gcc filename.c -o outputname
    ```
4. Run the executable:
    ```sh
    ./outputname
    ```

## Notes

- All file operations use `Test.txt` located in `Experiment 4/`.
- Update the file path in the code if your setup differs.
- The `.vscode/settings.json` file contains editor settings for Visual Studio Code.

## License

This project is for educational purposes.