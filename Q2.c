//2. Accept 10 values and print 4th, 7th and 9th value.
#include <stdio.h>
int main()
{
     int a[10],i,j;

    

    for(i=0;i<10;i++)
    {
        printf("Enter any five values :");
        scanf("%d\n",&a[i]);
    }
    printf("\n%d\n%d\n%d",a[3],a[6],a[8]);
}