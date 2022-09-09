#include <stdio.h>
/**
*main - print if the number is positive, zero, or negative
*
*Description: using the main function
*this program prints "Programming is positive, zero or negative
*Return: Always 0 (Success/correct)
*/
int main(void)

{
char lower_case;
char upper_case;

for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
{
putchar(lower_case);
}
for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
{
putchar(upper_case);
}



putchar('\n');

return (0);
}

