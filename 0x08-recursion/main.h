#ifndef MAIN_H
#define MAIN_H

/* Function prototypes */
int _putchar(char c);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int _sqrt_helper(int n, int i);
int is_prime_number(int n);
int is_prime_helper(int n, int divisor);
int is_palindrome(char *s);
int check_palindrome(char *s, int start, int end);
int string_length(char *s);

#endif /* MAIN_H */
