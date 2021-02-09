#include <stdio.h>
int main()
{
    int loop, input, prime = 1;
    printf("Enter the input\n:");

    scanf("%d", &input);

    for (loop = 2; loop < input; loop++)
    {
        if ((input % loop) == 0)
        {
            prime = 0;
        }
    }
    if (prime == 1)
    {
        printf("%d is prime number.", input);
    }

    else
    {
        printf("%d is not a prime number.", input);
    }
    return 0;
}