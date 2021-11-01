#include <stdio.h>
int main()
{
  int n,r,rem_n,t,start,end;

   printf("Enter the lower limit: ");
   scanf("%d",&start);

   printf("Enter the upper limit: ");
   scanf("%d",&end);

   printf("Palindrome numbers between %d and %d are: ",start,end);
  for(n=start;n<=end;n++)
  {
      t=n;
      rem_n=0;
      while(t)
      {
         r=t%10;
         t=t/10;
         rem_n=rem_n*10+r;
      }
      if (n==rem_n)
      printf("%d ",n);
  }  

  return 0;
}
