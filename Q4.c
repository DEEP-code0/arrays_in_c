//4. Print minimum no. of notes required. Notes given are 1 2, 5 10, 20. 50, 100, 200 & 500. eg if value is 1256. then answer is 2 notes of 500 Rs., 1 note of 200 Rs., 1 note of 50 Rs., 1 note of 5 Rs., and 1 note of 1 Rupee.
#include <stdio.h>
int main()
{
    int n[9]={500,200,100,50,20,10,5,2,1};
    int a,i,c[9]={0};

    printf("Enter any amount :");
    scanf("%d",&a);

    for(i=0;i<9;i++)
    {
        if(a>=n[i])
        {
            c[i]=a/n[i];
            a=a % n[i];
        }
    }

    for(i=0;i<9;i++)
    {
        if(c[i]>0)
        {
        printf("%d notes of %d rupees.\n",c[i],n[i]);
        }    
    }
}