//8. Copy one array of 5 elements to another array of 10 elements skipping one element.
#include<stdio.h>
int main()
{
    int a[5];
    int b[10]={0};

    printf("Enter numbers in array :");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<5;i++)
    {
        b[i*2]=a[i];
    }

     for(int i=0;i<10;i++)
    {
       printf("%d\t",b[i]);
    }


}