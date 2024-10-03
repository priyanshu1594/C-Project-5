#include<stdio.h>
int main()
{
    int a[10][10],r,c,i;
    printf("Enter the number of row : ");
    scanf("%d",&r);
    printf("Enter the number of column : ");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("A[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
   
    for(i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]>a[0][0])
            {
                a[0][0]=a[i][j];
                
            }
            
        }
    }
     printf("The largest element in the array is : %d ",a[0][0]);
    return 0;
}