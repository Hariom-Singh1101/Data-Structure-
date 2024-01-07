#include <stdio.h>
void displayArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    
        {
            printf("%d ",A[i]);
        }
        printf("\n");
    
}
void selectionsort(int*A,int n){
    for(int i=0;i<n;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if (A[j]<A[minindex])
            {
                minindex=j;
            }
        }
        int temp=A[i];
        A[i]=A[minindex];
        A[minindex]=temp;
    }
}
int main()
{
    int A[] = {3, 7, 9, 5, 8};
    int n = 5;
    displayArray(A, n);
    selectionsort(A,n);
    displayArray(A, n);
    return 0;
}