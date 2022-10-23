#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers of your wish\n");
    scanf("%d%d",&a,&b);
    int c=a;
    a=b;
    b=c;
    printf("The swapped values are %d,%d",a,b);
    return 0;
}
