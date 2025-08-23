#include <stdio.h>
void binary(int *, int);//prototype
void bubblesort(int *, int);
void printarray(int *, int);
void bubblesort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void binary(int arr[], int size)
{
    printf("enter element to be searched");
    int search;
    scanf("%d", &search);

    int lb = 0, ub = size - 1, mid;
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;

        if (arr[mid] == search)
        {
            printf("element found at position %d\n", mid);
            return;
        }
        else if (arr[mid] < search)
        {
            lb = mid + 1;
        }
        else // arr[mid] > search
        {
            ub = mid - 1;
        }
    }
    printf("element not found\n");
}

int main()
{
    int size, arr[100];
    printf("enter size of array: ");
    scanf("%d", &size);

    printf("enter elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("sorted array: ");
    bubblesort(arr, size);
    printarray(arr, size);

    binary(arr, size);
  
}
