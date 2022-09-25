//SIMPLE CALCULATOR USING SWITCH STATEMENT?
#include<stdio.h>
int main()
{
    char x;
    float a,b;
    printf("Enetr an Operator(+, -, *, /): ");
    scanf("%c",&x);

    printf("Enter the Operands:");
    scanf("%f %f",&a, &b);

    switch(x)
    {
        case '+':printf("%f + %f = %f",a,b,a+b); break;

        case '-':printf("%f - %f = %f",a,b,a-b); break;

        case '*':printf("%f * %f = %f",a,b,a*b); break;

        case '/':printf("%f / %f = %f",a,b,a/b); break;
        
        default:printf("Invalid! operator is not correct");

    }
    return 0;
}