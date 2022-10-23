#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    int f_digit=x%10;
    int t_digit=x/100;
    int s_digit=x/10-(t_digit)*10;
    printf("The required number is %d\n",f_digit*100+s_digit*10+t_digit);
    return 0;
}
