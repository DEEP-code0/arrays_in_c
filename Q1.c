//accept 5 values and print them later on.
#include <stdio.h>
int main()
{
    int a[5],i;

    

    for(i=0;i<5;i++)
    {
        printf("Enter any five values :");
        scanf("%d\n",&a[i]);
        
        printf("\n%d",a[i]);
    }
    
}