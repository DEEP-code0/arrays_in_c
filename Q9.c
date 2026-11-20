//9. Reverse the array of maxımum 5 elements.

#include <stdio.h>
int main()
{
    int n,i,c;

    printf("Enter the size of array not more than 5 :");
    scanf("%d",&n);

    int a[n];

    if(n<1||n>5)
    {
        printf("The size is invalid.....\n");
        return 1;
    }

    printf("\nEnter %d elements of array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n/2;i++)
    {
        c=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=c;
    }

    printf("\nThe reversed array is :");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}