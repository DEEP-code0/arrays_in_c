//10. Find out frequency of each number in the array (having 10 elements)
#include <stdio.h>
int main()
{
    int a[10],i,j,c,f[10];

    printf("Enter numbers in array:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        f[i]=-1;
    }

    for(i=0;i<10;i++)
    {
        if(f[i]!=0)
        {
            c=1;
            for(j=i+1;j<10;j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                    f[j]=0;
                }
            }
            f[i]=c;
        }
    }

    printf("\nFrequency of each element:\n");
    for (int i = 0; i < 10; i++) {
        if (f[i] != 0) {
            printf("%d occurs %d time(s)\n", a[i], f[i]);
        }
    }

}