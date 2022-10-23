#include<stdio.h>
int main()
{
    int a;
    printf("Enter your number\n");
    scanf("%d",&a);
    ((-(~a))%2)==0?printf("The number is a odd number\n"):printf("The number is a even number");
    return 0;
}
