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
| c      | _printchar       |prints a character |
| s  | _printstring       |prints a string |
| i  | _print_integer        |prints an integer |
| d  | _print_integer        |prints a decimal |

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
![printf_flowchart]("C:\Users\bakou\Pictures\Screenshots\printf_flowchart.png")
