#include <stdio.h>
/**
*print_times_table - prints the  times table with
*parameter
*@n: parameter
*Return: returns nothing
*/
void print_times_table(int n) {
    if (n > 15 || n < 0) {
        return;  // Do nothing if n is out of range
    }
  
    for (int i = 0; i <= 10; ++i) {
        printf("%d x %d = %d\n", i, n, i * n);
    }
}}
