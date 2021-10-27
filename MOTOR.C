#include<stdio.h>
#include<conio.h>
int a;
void main()
{
clrscr();
printf("Enter the water  level:");
scanf("%d",&a);
if (a=0&&a<=10)
printf("Motor is on");
else if(a>10&&a<90)
printf("Motor is Running");
else if(a>90&&a<=100)
printf("Motor is off");
else
printf("Invalid value");
getch();
}