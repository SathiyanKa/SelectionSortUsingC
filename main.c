#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void swap (int* arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int main()
{
    int n;
    printf("Size :");
    scanf("%d",&n);
    int arr[n];
    for(int i =0; i < n; i++)
        scanf("%d",&arr[i]);

    int i, j , min;
    for(i = 0; i < n - 1; i++)
    {
        min = i;
        for(j = i+1; j < n; j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }
        if(min != i) swap(arr,min,i);
    }
    for(int i = 0; i < n; i++)
        printf("%d ",arr[i]);
    return 0;
}
