#include <stdio.h>

struct process
{
    int pid;
    int at;
    // int wt;
    int bt;
    int ct;
    int tat;
    int wt;
};
int main()
{
    int n;
    float avgTAT = 0, avgWT = 0;
    printf("enter no. of processes");
    scanf("%d", &n);

    struct process p[n];
    for (int i = 0; i < n; i++)
    {
        p[i].pid = i + 1;
        printf("enter AT of p%d", i + 1);
        scanf("%d", &p[i].at);
        printf("enter BT of p%d", i + 1);
        scanf("%d", &p[i].bt);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (p[i].at > p[j].at)
            {
                struct process temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    int currTime =0;
    for(int i=0;i<n;i++){

        if (currTime<p[i].at)
        currTime=p[i].at;

        p[i].ct=currTime +p[i].bt;
        p[i].tat=p[i].ct -p[i].at;
        p[i].wt=p[i].tat-p[i].bt;

        currTime=p[i].ct;

        avgTAT=avgTAT+p[i].tat;
        avgWT=avgWT+p[i].wt;

    }

    avgTAT=avgTAT/n;
    avgWT=avgWT/n;

    printf("PID\tAT\tBT\tCT\tTAT\tWT\n");
    for(int i=0;i<n;i++){
        printf("p%d\t%d\t%d\t%d\t%d\t%d\t\n",i+1,p[i].at,p[i].bt,p[i].ct,p[i].pid,p[i].tat,p[i].wt);
    }
    printf("\nAverage TAT = %.2f", avgTAT);
    printf("\nAverage WT  = %.2f\n", avgWT);
}