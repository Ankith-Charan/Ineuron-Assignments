#include<stdio.h>
int main()
{
    int x;
    printf("Enter number of your choice\n");
    scanf("%d",&x);
    int y;
    printf("Enter single digit to be added\n");
    scanf("%d",&y);
    printf("The required number is %d\n",((x*10)+y));
    return 0;
}
