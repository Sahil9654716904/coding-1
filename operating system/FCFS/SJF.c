#include <stdio.h>
#include <limits.h>
struct  process
{
    int pid;
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
    int completed;
};

void main(){
    int i, n;
    float avgTAT=0, avgWt=0;
    printf("Enter No. of Processes \n");
    scanf("%d", &n);

    struct process p[n];

    printf("Enter Process Details \n");
    for (i = 0; i < n; i++)
    {
        p[i].pid = i+1;

        printf("Enter P%d AT: ",p[i].pid);
        scanf("%d",&p[i].at);

        printf("Enter P%d BT: ",p[i].pid);
        scanf("%d",&p[i].bt);

        p[i].completed = 0;
    }
    int time=0, count=0;
    while(count < n)
    {
        int min = INT_MAX;
        int abc = -1;
        for(i=0; i<n; i++)
        {
            if(p[i].at <= time && p[i].completed == 0)
            {
                if(p[i].bt < min)
                {
                    min=p[i].bt;
                    abc = i;
                }
            }
        }

        if(abc== -1)
        {
            time++;
        }
        else
        {
            time=time+p[abc].bt;
            p[abc].ct = time;
            p[abc].tat = p[abc].ct - p[abc].at;
            p[abc].wt = p[abc].tat - p[abc].bt;

            avgTAT=avgTAT+p[abc].tat;
            avgWt= avgWt+ p[abc].wt;

            p[abc].completed=1;
            count++;
        }
    }

    printf("PID\tAT\tBT\tCT\tTAT\tWT\n");
    for(int i=0; i<n; i++)
    {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", i+1, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt);
    }

    printf("Average WT=%f \n", avgWt/n);
    printf("Average TAT=%f \n", avgTAT/n);
};