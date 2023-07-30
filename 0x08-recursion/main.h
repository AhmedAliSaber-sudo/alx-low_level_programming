#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Ahmed Ali
 * Desc: header file conatin prototypes for all functions used in the 0x08-recursion directory.
 */

int _putchar(char c);

/**
 * _puts_recursion - print string with new line
 * @s: string to print
 */

void _puts_recursion(char *s);

/**
 * _print_rev_recursion - print string in reverse
 * @s: string to print
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - return string length
 * @s: string
 */

int is_palindrome(char *s);


int wildcmp(char *s1, char *s2);

#endif
