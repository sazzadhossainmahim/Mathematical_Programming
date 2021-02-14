#include <stdio.h>

int main()
{
    int input_a, input_b, loop, hcf;
    printf("Enter tow number\n:");
    scanf("%d%d", &input_a, &input_b);

    for (loop = 1; loop <= input_a || loop <= input_b; loop++)
    {
        if (input_a % loop == 0 && input_b % loop == 0)
        {
            hcf = loop;
        }
    }
    printf("HCF = %d", hcf);
    return 0;
}