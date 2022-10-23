#include<stdio.h>
int main()
{
    int x;
    printf("Enter umber of your choice\n");
    scanf("%d",&x);
    int ld=x%10;
    x>10?printf("The required number is %d",x-ld):printf("The required number is %d",x);
    return 0;
}
