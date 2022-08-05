#include<stdio.h>
int fact(int);
int combination(int,int);
void triangle(int);
int main()
{
   int n;
   printf("Enter the total limit.\n");
   scanf("%d",&n);
   triangle(n);
   return 0;

}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
void triangle(int n)
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" %d ",combination(i,j));
        }
        printf("\n");
    }
}



