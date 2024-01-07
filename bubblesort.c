#include<stdio.h>
void displayarray(int *A, int n){
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void bubblesort(int*A,int n){
    for(int i=0;i<n;i++)
    {
        int temp;
        for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1])
            {
             temp=A[j];
             A[j]=A[j+1];
             A[j+1]=temp;
            }
        }
    }
}
int main()
{
    int A[]={23,1,99,11};
    int n=4;
    displayarray(A,n);
    bubblesort(A,n);
     displayarray(A,n);
     return 0;

    
}