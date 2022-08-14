//function to sort an array of any size. (TSRS)
#include<stdio.h>
int sort(int *,int);
int main()
   {
     int a[10];
     sort(a,10);
     return 0;

   }
int sort(int b[],int n)
{    int i,j,temp=0;
     printf("Enter %d numbers\n",n);
     for(i=0;i<n;i++)
       scanf("%d",&b[i]);
    for (i=0;i<n;i++)
        {
            for (j=i+1;j<n;j++)
            {
                if (b[i]>b[j])
                {
                    temp=b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
         printf("The numbers arranged in ascending order are\n");
        for(i=0;i<n;i++)
        printf("%d ", b[i]);

}
