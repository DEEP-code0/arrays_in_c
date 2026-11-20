//Accept 5 values and sort the array in either ascending or descending order Find out different techniques for sorting the array and also find out which one is the best technique.
#include <stdio.h>
void main()
{
    int a[5],i,b;

    for(i=0;i<5;i++)
    {
        printf("Enter any number:");
        scanf("%d\n",&a[i]);
    }

    for(i=0;i<4;i++)
    {
        if(a[i] < a[i+1])
        {
            b=a[i+1];
            a[i+1]=a[i];
            a[i]=b;
            i=-1;
        }

    }

     for(i=0;i<5;i++)
    {
        printf("%d,",a[i]);
    }
}