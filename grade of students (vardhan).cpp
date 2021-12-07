#include<stdio.h>
main()
{
     int a;
     scanf("%d",&a);
     if(a>90)
     {
       printf("grade A");
     }
     else
     if(a>80)
     {
       printf("grade B");
     }
     else
     if(a>70)
     {
       printf("grade C");
     }
     else
     if(a>60)
     {
       printf("grade D");
     }
     else
     if(a<60)
     {
       printf("grade E");
     }
}
