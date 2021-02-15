#include <stdio.h>
int main()
{
    float input;
    int formula;
    float percentage, total;
    printf("Enter the input and total\n:");
    scanf("%f%f", &input, &total);

    percentage = ((input / total) * 100);

    printf("Percentage of the input is:%.2f%%\n", percentage);
    return 0;
}