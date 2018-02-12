#include<stdio.h>
void main()
{
int n,i,sum=0;
float avg;
printf("Enter the number of value:");
scanf("%d",&n);
for(i=1;i<=n;i++);
{
sum +=i; 
printf("the sum of n numbers is:%d",sum);
avg=sum%n;
printf("The average is %d",avg);
}
getch();
}


