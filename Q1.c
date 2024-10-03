#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : \n");
    for(i=0;i<n;i++)
    {
        printf("A[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("The Negative elements in the array are : ");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf(" | %d | ",a[i]);
        }
    }
}