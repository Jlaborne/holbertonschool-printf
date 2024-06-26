# Project : C - printf
![](https://imgur.com/ZdbB0Pf.png)
Description :
This project aim to recreate a function similar to the function "printf()".

## What is printf() ?

In C language, printf() function is used to print formatted output to the standard output stdout (which is generally the console screen). The printf function is a part of the C standard library <stdio. h> and it can allow formatting the output in numerous ways.

## Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## Patterns

| Specifiers  | Functions   |Description |
| ----------- | ----------- |----------- |
| %c      | _printchar       |prints a character |
| %s  | _printstring       |prints a string |
| %i  | _print_int_dec        |prints an integer |
| %d  | _print_int_dec        |prints a decimal |

## Usage/Examples

```code
_printf("Let's try to printf a simple sentence.\n");
```
Output :
```code
Let's try to printf a simple sentence.
```
---------------------------------------------------
```code
_printf("Character:[%c]\n", 'H');
```
Output :
```code
Character: [H]
```
---------------------------------------------------
```code
 _printf("Negative:[%d]\n", -762534);
```
Output :
```code
 Negative:[-762534]
```
Flowchart :
![Flowchart Printf](https://github.com/Jlaborne/holbertonschool-printf/assets/147745163/9f693d8b-992d-40d2-ad06-8e93e6f53a5e)


![printf_flowchart](https://github.com/Jlaborne/holbertonschool-printf/assets/59557237/6ab0965c-ba5c-4100-892f-86ce15d8fc46)

