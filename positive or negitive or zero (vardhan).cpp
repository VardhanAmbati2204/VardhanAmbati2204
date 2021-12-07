#include<stdio.h>
main()
{
  int a;
  scanf("%d",&a);
  if (a>0)
  {
    printf("a is +ve");
  }
  else
  if (a<0)
  {
    printf("a is -ve");
  }
  else
  if(a==0)
  {
    printf("a is 0");
  }
}
