// function to read n number of values in an array and display it in reverse
#include<stdio.h>
int rev(int *);
int main()
{
   int a[50];
   rev(a);
   return 0;
}

int rev(int b[])
   { int n;
     printf("Enter size of array\n");
     scanf("%d",&n);
     int i;
     printf("Enter array elements\n");
     for(i=1;i<=n;i++)
       scanf("%d",&b[i]);
     printf("Array elements in reverse order are:\n");
     for(i=n;i>=1;i--)
        printf("%d ",b[i]);
    }
