//6. Multiply two 2D array and store the result in the 3rd 2D-array
#include <stdio.h>
int main()
{
    int r,c;

    printf("Enter rows and columns:");
    scanf("%d %d",&r,&c);

    int a[r][c],b[r][c],s[r][c];

    printf("\nEnter values for first array:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter values for second array:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            s[i][j]=a[i][j]*b[i][j];
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }

    return 0;
}