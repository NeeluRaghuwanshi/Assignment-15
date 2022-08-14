//function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int greatest(int *);
int main()
   {
     int a[10];
     greatest(a);
     return 0;
   }
int greatest(int b[])
  {
     int i,gt;
     printf("Enter array values\n");
     for(i=0;i<=9;i++)
     scanf("%d",&b[i]);
     gt=b[0];
     for(i=1;i<=9;i++)
      if(gt<b[i])
         gt=b[i];
      printf("%d is greatest",gt);
  }
