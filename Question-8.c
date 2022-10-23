#include<stdio.h>
#include<string.h>
int main()
{
    char DD,MM,YYYY;
    printf("Enter DATA in format in format of DD/MM/YYYY\n ");
    scanf("%d/%d/%d",&DD,&MM,&YYYY);
    printf("Date-%d , Month-%d , Year-%d",DD,MM,YYYY);
    return 0;
}
