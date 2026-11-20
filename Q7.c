//Obtain transpose of a 4x4 matrix. The transpose of a matrix is obtained by exchanging the elements of each row with the elements of the corresponding column.
#include <stdio.h>
int main()
{
    int r,c;

    printf("Enter number of columns and rows :");
    scanf("%d %d",&r,&c);

    int a[r][c],i,j;

    printf("Enter the elements of arrays:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}