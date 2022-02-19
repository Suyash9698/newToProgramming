#include<stdio.h>
int main()
{
    int i,j,limit,process[20],wt[30],at[20],x=0;
    int bt[20],tat[20],sum=0,temp;
    float awt,atat;
    printf("enter the no. of process");
    scanf("%d",&limit);
    for(i=0;i<limit;i++)
    {
        printf("\n enter process no.   ");
        scanf("%d",&process[i]);
        printf("enter burst time   ");
        scanf("%d",&bt[i]);
        printf("enter arrival time   ");
        scanf("%d",&at[i]);

    }
    for(i=0;i<limit;i++)
    {

        for(j=i;j<limit;j++)
        {
            if(bt[i]>bt[j])
            {
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
                temp=process[i];
                process[i]=process[j];
                process[j]=temp;

            }
        }
    }
    wt[0]=0;
    for(i=1;i<limit;i++)
    {
        wt[i]=bt[i-1]+wt[i-1];
        sum=sum+wt[i];
    }
    awt=sum/limit;


    for(i=0;i<limit;i++)
    {
        tat[i]=bt[i]+wt[i];
        x=x+tat[i];
    }
    atat=x/limit;
    printf("PROCESS NO.\tBURST TIMT\tWAITING TIME\tTURNAROUND TIME\n");
    for(i=0;i<limit;i++)
    printf("%d\t\t\t%d\t\t%d\t\t%d\n",process[i],bt[i],wt[i],tat[i]);
    printf("\nAVERAGE WAITING TIME=    %.2f",awt);
    printf("\nAVERAGE TURNAROUND TIME=    %.2f",atat);




}
