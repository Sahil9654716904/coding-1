#include <stdio.h>
#include <limits.h>

struct process
{
    int pid;
    int burst_time;
    int waiting_time;
    int turnaround_time;  
    int remaining_time;
    int arrival_time; 
    int completion_time;                                                                     
};

int main() {
    int i, n;
    float avg_waiting_time, avg_turnaround_time;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    struct process p[n];
    printf("Enter Process Details: \n");
    for (i = 0; i < n; i++)
    {
        p[i].pid = i + 1;
        printf("Enter Arrival Time for Process %d: ", p[i].pid);
        scanf("%d", &p[i].arrival_time);
        printf("Enter Burst Time for Process %d: ", p[i].pid);
        scanf("%d", &p[i].burst_time);
        p[i].remaining_time = p[i].burst_time; 
    }
    int completed = 0, time = 0;
    while (completed !=n ) {
        int min_rt = INT_MAX;
        int idx = -1;
        for (i = 0; i < n; i++) {
            if (p[i].arrival_time <= time && p[i].remaining_time > 0 && p[i].remaining_time < min_rt) {
                min_rt = p[i].remaining_time;
                idx = i;
            }
        }
        if (idx == -1) {
            time++;
        } else {
            p[idx].remaining_time--;
            if (p[idx].remaining_time == 0) {
                completed++;
                p[idx].completion_time = time + 1;
                p[idx].turnaround_time = p[idx].completion_time - p[idx].arrival_time;
                p[idx].waiting_time = p[idx].turnaround_time - p[idx].burst_time;
            }
            time++;
        }
    }
    printf("Process ID\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++)   {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", p[i].pid, p[i].arrival_time, p[i].burst_time, p[i].waiting_time, p[i].turnaround_time);
    }
}