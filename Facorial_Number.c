#include<stdio.h>

int main(){
    int loop;
    int input;
    int factorial = 1;
    printf("Enter the Input:\n");
    scanf("%d",&input);
    for(loop=1;loop<=input;loop++){
        factorial = factorial * loop;
    }
    printf("Factorial of %d = %d\n",input,factorial);
    return 0;
}