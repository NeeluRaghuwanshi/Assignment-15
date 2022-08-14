//function to find the first occurrence of adjacent duplicate values in the array
#include<stdio.h>
int duplicate(int *);
int main()
   {
     int a[10];
     printf("%d is adjacent duplicate ",duplicate(a));
     return 0;
   }
int duplicate(int b[])
  {
     int i;
     printf("Enter 10 values in  array\n");
     for(i=0;i<=9;i++)
     scanf("%d",&b[i]);
     for(i=0;i<=9;i++)
        if(b[i]==b[i+1])
       return b[i+1];
  }
