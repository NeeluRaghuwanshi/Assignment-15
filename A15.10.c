//function in C to count the frequency of each element of an array.
#include <stdio.h>
int frequency(int*,int*);
int main()
 {
   int a[100], f[100];
   frequency(a,f);
   return 0;
 }
int frequency(int a[],int f[])
  {
    int n,i,j,c;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
    printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      scanf("%d ",&a[i]);
		  f[i] = -1;
	    }
    for(i=0; i<n; i++)
    {
        c = 1;
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                c++;
                f[j] = 0;
            }
        }

        if(f[i]!=0)
        {
            f[i] = c;
        }
    }
    printf("The frequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(f[i]!=0)
        {
            printf("%d occurs %d times\n", a[i],f[i]);
        }
    }
}
