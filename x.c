#include <stdio.h>

int main()
{
    char a, b; 
    int c;
    printf("Enter the value of charl: ");
    scanf("\n%c",&a) ;
    printf("Enter the value of char2: ");
    scanf ("\n%c",&b);
    c = (int) a + b;
    printf("this is c: %d\n", c) ;
}