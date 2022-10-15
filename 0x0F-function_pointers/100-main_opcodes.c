#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcode of it self
 *
 * @argc: number of arguments passed to main.
 * @argv: argument vertor
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
    int number_of_bytes, i;
    char *c = (char *) main;
    
    if (argc > 2 || argc == 1)
    {
        printf("Error\n");
        exit(1);
    }
    if (number_of_bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }
    number_of_bytes = atoi(argv[1]);

    i = 0;
    while (i < number_of_bytes)
    {
        /*if (c[i] >= 'A' && c[i] <= 'Z')
        {
            c[i] = c[i] + 32; 
        }*/
        printf("%02x", c[i] & 0xFF);
        if (i != (number_of_bytes - 1))
        {
            printf(", ");
        }
        i++;
    }
    printf("\n");

    return (0);
}
