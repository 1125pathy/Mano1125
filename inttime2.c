#include <stdio.h>
struct TIME
{
int sec;
int min;
int hour;
};
void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);

int main()
{
 struct TIME startTime, stopTime, diff;
printf("Enter start time: \n");
 printf("Enter hours, minutes and seconds respectively: ");
scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
printf("Enter stop time: \n");
printf("Enter hours, minutes and seconds respectively: ");
scanf("%d %d %d", &stopTime.hour, &stopTime.min, &stopTime.sec);
printf("\nTIME DIFFERENCE: %d:%d:%d - ", startTime.hour, startTime.min, startTime.sec);
printf("= %d:%d:%d\n", diff.hours, diff.min, diff.sec);
return 0;
}
void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff)
{
--start.minutes;
start.seconds += 60;
}
diff->seconds = start.seconds - stop.sec;
if(stop.minutes > start.minutes){
--start.hours;
diff->minutes = start.minutes - stop.min;
diff->hours = start.hours - stop.hours;
}
