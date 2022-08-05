#include<stdio.h>
int check(int);
int main()
{
    int n;
    printf("Enter the no.\n");
    scanf("%d",&n);
    if(check(n))
        printf("%d is not a prime no.",n);
    else
        printf("%d is a prime no.",n);
     return 0;
}
int check(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 1;

    }
    return 0;
}
