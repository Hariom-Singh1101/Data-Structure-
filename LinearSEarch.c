#include <stdio.h>
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size ; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 11, 22, 33, 44, 55};
    int size = sizeof(arr) / sizeof(int);
    int element = 33;
    int searchindex = linearSearch(arr, size, element);
    printf("The Element %d found on index %d", element, searchindex);
    return 0;
}