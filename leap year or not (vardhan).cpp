#include<stdio.h>
main()
{
  int a;
  scanf("%d",&a);
  if(a==366)
  {
   printf("leap year");
  }
  if(a==365)
  {
    printf("normal year");
  }
  if(a!=365&&a!=366)
  {
  	printf("invalid");
  }
} 
