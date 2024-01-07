#include <stdio.h>

void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
// insertion
void Indinsertion(int arr[],int size,int index,int capacity,int element)
{
    if (size>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int main()
{
    int arr[100] = {2, 3, 4, 5, 6};
    int size=5,index=2,element=90;
    display(arr,5);
    Indinsertion(arr,size,index,100,element);
    size+=1;
    display(arr,size);


    return 0;
}