#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        int ch ='a';
        while (ch <= '2')
        {
                putchar(ch);
                ch++;
        }
        putchar('\n');
        return (0);
}
