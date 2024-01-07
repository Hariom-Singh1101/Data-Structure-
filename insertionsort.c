#include <stdio.h>
void displayarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void insertionsort(int *A, int n)
{
    int key,j;
    for (int i = 1; i < n; i++)
    {
         key = A[i];
         j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}
int main()
{
    int A[] = {23, 1, 99, 11};
    int n = 4;
    displayarray(A, n);
    insertionsort(A, n);
    displayarray(A, n);
    return 0;
}