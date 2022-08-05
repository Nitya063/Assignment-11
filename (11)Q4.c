#include<stdio.h>
int next(int);
int main()
{
    int n;
    printf("Enter the no.\n");
    scanf("%d",&n);
    printf("The prime no. next to %d is ",n);
    printf("%d",next(n));
    return 0;
}
int next(int n)
{
    int i,flag;
    while(1)
    {
        flag=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        return n;
    }
    n++;
    }
}

