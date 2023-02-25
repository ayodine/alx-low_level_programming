#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 61285247514
 * Return: Always 0 (success)
 */

int main(void)
{
    long long int n = 612852475143;
    long long int i;
    
    while (n % 2 == 0)
    {
	    n /= 2;
    }
    for (i = 3; i <= sqrt(n); i += 2)
    {
	    while (n % i == 0)
	    {
		    n /= i;
	    }
    }
    
    if (n > 2)
    {
	    printf("%lld\n", n);
    }
    else 
    {
	    printf("%lld\n", i-2);
    }
    return (0);
}

