#include<stdio.h>

int main()
{
    int number;
    printf("Enter a Three-digit interger number\n:");

    scanf("%d",number);

    int orginal_number;
    int remainder;
    int result = 0;

    orginal_number = number;

    while(orginal_number != 0){
        remainder = orginal_number % 10;

        result += remainder * remainder * remainder ;

        orginal_number /= 10;

    }
    if(result == number )
    {
        printf("%d is an Armstrong Number:", number);
    }
    else 
    {
        printf("%d is not an Armstrong number.",number);
    }
    return 0;
}
