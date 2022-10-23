#include<stdio.h>
int main()
{
    int s;
    printf("The size of int is %d bytes\n",sizeof(int));
    printf("The size of short int is %d bytes\n",sizeof(short int));
    printf("The size of long int is %d bytes\n",sizeof(long int));
    printf("The size of double is %d bytes\n",sizeof(double));
    printf("The size of float is %d bytes\n",sizeof(float));
    printf("The size of long double is %d bytes\n",sizeof(long double));
    printf("The size of char is %d byte\n",sizeof(char));
    return 0;
}
