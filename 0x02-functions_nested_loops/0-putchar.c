#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
    int i;
	char marks[8]={95,112,117,116,99,104,97,114};
	
	for(i=0;i<8;i++){

	putchar(marks[i]);
	}
	printf("\n");
	return (0);
}
