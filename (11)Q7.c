#include<stdio.h>
void fibonacci(int);
int main()
{
    int n;
    printf("Enter the limit.\n");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int i,f=0,s=1,t;
    printf("%d\n%d\n",f,s);
    for(i=3;i<=n;i++)
    {
        t=f+s;
        printf("%d\n",t);
        f=s;
        s=t;


    }
}



