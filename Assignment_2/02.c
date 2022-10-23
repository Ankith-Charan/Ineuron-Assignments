#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    int b=a%10;
    int c=(a-b)/10;
    printf("The number without last digit is %d",c);
    return 0;
}

