//function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int totalduplicate(int *);
int main()
   {
     int a[10];
     printf("total duplicates are %d ",totalduplicate(a));
     return 0;
   }
int totalduplicate(int b[])
  {
     int i,j,count=0;
     printf("Enter 10 values in  array\n");
     for(i=0;i<=9;i++)
     scanf("%d",&b[i]);
     for(i=0;i<=9;i++)
     {
        for(j=i+1;j<=9;j++)
        {
         if(b[i]==b[j])
         count++;
        }
     }
       return count;

  }
