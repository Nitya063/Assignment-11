#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no.\n");
    scanf("%d",&n);
    square(n);
    return 0;
}
void square(int n)
{
    printf("%d",n*n);
}
