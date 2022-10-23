#include<stdio.h>
int main()
{
    int a;
    printf("Enter a three digit number\n");
    scanf("%d",&a);
    int sum=a/100+((a/10)%10)+a%10;
    printf("The sum of three digit number is %d",sum);
    return 0;
}
