#include<stdio.h>
#include<conio.h>
int a,b,i;
int main()
{
clrscr();
printf("Enter the current tank level:");
scanf("%d",&a);
printf("Enter the max water level:");
scanf("%d",&b);
for(i=a;i<=b;i++)
{
printf("tank is %d level \n",i);
if(i==b)
{
printf("Reached Max level");
}
}
for(i=b;i>=a;i--)
{
printf("tank level is %d \n",i);
if(i==a)
{
printf("tank level is empty");
}
}
return 0;
}
