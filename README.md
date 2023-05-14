# c_31_n0_v0w3ls

## DESCRIPTION

Suppose you’re learning computer science and spending time every week on problem sets. You may be wondering how many hours you’ve spent learning computer science, on average or in total! In this program, there is a function that calculates, based on a user’s input, a total number of hours or an average number of hours across a given number of days.

### IMPLEMENTATION DETAILS

- The program must accept a single command-line argument, which will be the word that we want to convert.
- If the program is executed without any command-line arguments or with more than one command-line argument, the program should print an error message and return from main a value of 1 (which tends to signify an error) immediately.
- The program must contain a function called replace which takes a string input and returns a string output.
- This function will change the following vowels to numbers: `a` becomes `6`, `e` becomes `3`, `i` becomes `1`, `o` becomes `0` and `u` does not change.
- The input parameter for the replace function will be argv[1] and the return value is the converted word.
- The main function will then print the converted word, followed by \n.
- Try using the switch statement in the replace function.

If there is no argument, print how to use the program

```bash
./no-vowels
Usage: ./no-vowels word
```

Examples:

```bash
./no-vowels hello
h3ll0
```

```bash
./no-vowels pseudocode
ps3ud0c0d3
```

## INSTALL LIBRARIES

The source code uses the cs50 library what you can download [HERE](https://github.com/cs50/libcs50).

To install the cs50 library follow the steps:

1. Open git bash terminal and change the current working directory to `src`:  
   > cd ./libsc50/src

2. Compile the cs50.c source into .o with:
   > gcc -c cs50.c -o cs50.o

3. Make the library archive:  
   > ar rcs libcs50.a cs50.o

4. Copy the `libcs50.a` file into your compiler's `lib` directory

5. Copy the `cs50.h` file into your compiler's `include` directory

## COMPILE AND RUN THE CODE

The code is written in C, the compiler used to generate the exe is: `gcc Rev10, Built by MSYS2 project 12.2.0`

Run the below code in terminal (git bash) to compile the source:

> gcc commandLineArgument.c -lcs50 -o ./build/commandLineArgument

To run the executable run the below code in terminal (git bash):

> ./build/commandLineArgument.exe
