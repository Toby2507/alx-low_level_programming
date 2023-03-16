# Executables and C files for Low Level Programming

## 0-preprocessor

This executable runs a C file through the preprocessor and save the result into another file.

- The C file name will be saved in the variable $CFILE
- The output should be saved in the file c

## 1-compiler

This executable compiles a C file but does not link.

- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .o instead of .c.
- Example: if the C file is main.c, the output file should be main.o

## 2-assembler

This executable generates the assembly code of a C code and save it in an output file.

- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .s instead of .c.
- Example: if the C file is main.c, the output file should be main.s

## 3-name

This executable compiles a C file and creates an executable named cisfun.

- The C file name will be saved in the variable $CFILE

## 4-puts.c

This C program prints exactly "Programming is like building a multilingual puzzle, followed by a new line using the puts function.

## 5-printf.c

This C program prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line using the printf function.

## 6-size.c

This C program prints the size of various types on the computer it is compiled and run on.

## 100-intel

This executable generates the assembly code (Intel syntax) of a C code and save it in an output file.

## 101-quote.c

This executable prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
- Your program should return 1
- Your program should compile without any warnings when using the -Wall gcc option
