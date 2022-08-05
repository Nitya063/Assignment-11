#include <stdio.h>
#include <conio.h>
int num1, num2,n;
int LCM(int);
int main()
{
    int lcm;
    printf( " Enter any two positive numbers to get the LCM.\n ");
    scanf(" %d %d", &num1, &num2);
    n=(num1 > num2) ? num1 : num2;
    lcm= LCM(n);
    printf( " The LCM of %d and %d is %d. ", num1, num2,lcm);
    return 0;
}
int LCM(int n)
    {
    while (1)
    {
        if (n % num1 == 0 && n % num2 == 0)
        {
              return n;
        }
        ++n;
    }
}
