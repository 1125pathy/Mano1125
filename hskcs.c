#include<stdio.h>
void main()
{
int v,p[100],i;
printf("Enter the N: ");
scanf("%d",&n);
printf("\nEnter the N numbers: ");
for(i=0;i<v;i++);
{
scanf("%d",&p[i]);
}
for(i=0;i<v;i++)
{
if(p[i]<p[i+1])
{
continue;
}
else
{
printf("\n Missing number is: %d",i+1);
break;
}
}
}
