#include<stdio.h>
void primeno(int,int);
int main()
{
    int a,b;
    printf("Enter the no.s\n");
    scanf("%d%d",&a,&b);
    printf("The prime no.s between %d and %d :\n",a,b);
    primeno(a,b);
    return 0;
}
void primeno(int a,int b)
{
    int i,j,flag;
    for(i=a;i<=b;i++)
    {
        flag=0;
    for(j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d\n",i);
    }
    }
}


