#include<stdio.h>
int main()
{
    int a[20],i,n,x;
    printf("enter array  ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter no. to deleted  ");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(n==a[i])
        {
            x=i;

        break;
        }
    }
    for(i=x;i<5;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<4;i++)
        printf("%d  ",a[i]);



}
