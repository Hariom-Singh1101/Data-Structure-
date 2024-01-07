#include <stdio.h>
void displayArray(int *A, int n)
{
    for (int i = 0; i < n; i++)

    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int *A, int low, int mid, int high)
{
    int i, j, k, B[high - low + 1];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            j++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
        while (i <= mid)
        {
            B[k] = A[i];
            k++;
            i++;
        }
        while (j <= high)
        {
            B[k] = A[j];
            k++;
            j++;
        }
        for (i = low; i <= high; i++)
        {
            A[i] = B[i];
        }
    }
}
void mergesort(int *A, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(A, low, mid);
        mergesort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}
int main()
{
    int A[] = {9, 7, 6, 5, 4};
    int n = 5;
    displayArray(A, n);
    mergesort(A, 0, n - 1);
    displayArray(A, n);
    return 0;
}