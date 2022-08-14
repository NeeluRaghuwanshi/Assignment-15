//function in C to print all unique elements in an array.
#include<stdio.h>
#include<conio.h>
int unique(int *);
int main()
   {
     int a[10];
     unique(a);
     printf(" are unique elements\n");
     return 0;
   }
int unique(int b[])
  {
     int i,j,count;
     printf("Enter 10 values in  array\n");
     for(i=0;i<=9;i++)
     scanf("%d",&b[i]);
     for(i=0;i<=9;i++)
     {
        for(j=0;j<=9;j++)
        {
         if (b[i] == b[j] && (i!=j))

           break;
        }
         if(j==10)
         {
            count++;
            printf("%d ",b[i]);
         }
     }
     }


