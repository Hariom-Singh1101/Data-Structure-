#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertion(int arr[], int size, int capacity, int element, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {

        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int arr[20] = {2, 3, 4, 56, 6};
    int size = 5, capacity = 20, element = 10, index = 2;
    display(arr, 5);
    insertion(arr, size, capacity, element, index);
    size += 1;
    display(arr, size);
    return 0;
}