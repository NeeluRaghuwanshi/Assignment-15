//function to rotate an array by n position in d direction.
#include<stdio.h>
int rotate(int *);
int main()
{
    int a[50];
    rotate(a);
    return 0;
}
int rotate(int b[])
   {
      int i,x,n=2;
      printf("enter size of an array\n");
      scanf("%d",&x);
      printf("Enter array values\n");
      for(i=0;i<=x-1;i++)
        scanf("%d ",&b[i]);
        while(n!=0)
        {
            int temp=b[x-1];
             for(i=x-1;i>0;i--)
              {
                 b[i]=b[i-1];
              }
             b[0]=temp;
             n--;
        }
        for(i=0;i<x;i++)
            printf("%d ",b[i]);
   }
