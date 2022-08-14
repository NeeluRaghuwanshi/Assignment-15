//function to merge two arrays of the same size sorted in descending order.
#include <stdio.h>
int merge(int*,int*,int*);
int main()
{
    int a[5], b[5],c[10];
    merge(a,b,c);
    return 0;
}
int merge(int a[],int b[],int c[])
{
    int i, j, k;

       printf("Input elements in first array :\n");
       for(i=0;i<5;i++)
	      scanf("%d",&a[i]);

       printf("Input elements in second array :\n");
       for(i=0;i<5;i++)
	      scanf("%d",&b[i]);
    for(i=0;i<5; i++)
        {
            c[i] = a[i];
         }
     for(j=0;j<5; j++)
        {
            c[i] = b[j];
            i++;
        }
   for(i=0;i<10; i++)
        {
           for(k=0;k<9;k++)
             {

                if(c[k]<=c[k+1])
                 {
                   j=c[k+1];
                   c[k+1]=c[k];
                   c[k]=j;
                 }
              }
         }
     printf("\nThe merged array in decending order is :\n");
    for(i=0; i<10; i++)
    {
        printf("%d   ", c[i]);
    }
	printf("\n\n");
}
