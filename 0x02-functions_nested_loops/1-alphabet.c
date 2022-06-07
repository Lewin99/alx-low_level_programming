#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - entry point
 * Return: 0
 */
 void print_alphabet(void);
   int main()
   {
    // Write C code here
    print_alphabet();
    printf("\n");
    return 0;
    }
    
     void print_alphabet()
 {
     for(char i=97; i<122; i++)
     {
         putchar(i);
     }
 }
