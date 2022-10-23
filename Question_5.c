#include<stdio.h>
int main()
{
    char s[10];
    printf("Enter the string\n");
    scanf("%s",&s);
    int x=printf("%s\n",s);
    printf("%d\n",x);
    return 0;
}
