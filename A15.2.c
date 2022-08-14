//function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int smallest(int *);
int main()
   {
     int a[10];
     smallest(a);
     return 0;
   }
int smallest(int b[])
  {
     int i,gt;
     printf("Enter array values\n");
     for(i=0;i<=9;i++)
     scanf("%d",&b[i]);
     gt=b[0];
     for(i=1;i<=9;i++)
      if(gt>b[i])
         gt=b[i];
      printf("%d is smallest",gt);
  }
