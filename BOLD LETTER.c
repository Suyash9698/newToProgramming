#include<stdio.h>
int main()
{
    char l[20],m,i,j=0;
    printf("enter any character  ");
    scanf("%s",l);
repeat:
    {i='A';m='a';
    while(i!='Z')
    {
        if(m==l[j])
        {
            l[j]=i;
            break;
        }
        m++;
        i++;
    }


    j++;
    }
    if(l[j]!='\0')
    {
        goto repeat;
    }
    printf("%s",l);




}
