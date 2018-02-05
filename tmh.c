#include <stdio.h>
int main()
{
 int input_v,hour,min,sec;
printf("input number in total seconds\n");
scanf("%d", &input_v);
while(input_v > 3600){
hour = input_v /3600;
sec = min % 60;
printf("%dhours%dminutes and %dseconds\n",hour,min,sec);
}   
min = input_v / 60;
sec = input_v % 60;
printf("%dminutes and %dseconds\n",min,sec);
return 0;
}
