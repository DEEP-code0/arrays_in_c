//5 Add two 2D array of same size and store the result in the 3rd one.
#include<stdio.h>
int main()
{
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{6,4},{8,5}};
    int c[2][2],i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("sum of the two 2d arrays:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

}