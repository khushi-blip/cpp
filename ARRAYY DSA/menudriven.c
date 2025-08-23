#include <stdio.h>

// Function declarations
int createarray(int arr[], int size);
int insertarray(int arr[], int size, int pos, int value);
int deletearray(int arr[], int size, int pos);
int insertbyelement(int arr[], int size, int element, int value);
int deletebyelement(int arr[], int size, int element);
int searcharray(int arr[], int size, int value);
void updateelement(int arr[], int size, int pos, int value);
int minelement(int arr[], int size);
int maxelement(int arr[],int size);
void selectionsort(int arr[], int size);
void displayarray(int arr[], int size);
void bubblesort(int arr[],int size);
void insertionsort(int arr[],int size);

int main() {
    int arr[100], size = 0;

    while (1) {
        printf("\n---------------------------\n");
        printf("Menu:\n");
        printf("1. Create array\n");
        printf("2. Insert by position\n");
        printf("3. Delete by position\n");
        printf("4. Insert by element\n");
        printf("5. Delete by element\n");
        printf("6. Search element\n");
        printf("7. Update element by position\n");
        printf("8. Minimum element\n");
        printf("9. MAXimum element\n");
        printf("10.selection sort\n");
        printf("11.bubblesort array\n");
        printf("12.Insertion sort\n");
        printf("13. Display array\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                size = createarray(arr, size);
                break;

            case 2: {
                int pos, value;
                printf("Enter position (1-based): ");
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &value);
                size = insertarray(arr, size, pos, value);
                break;
            }

            case 3: {
                int pos;
                printf("Enter position to delete (1-based): ");
                scanf("%d", &pos);
                size = deletearray(arr, size, pos);
                break;
            }

            case 4: {
                int element, value;
                printf("Enter element after which to insert: ");
                scanf("%d", &element);
                printf("Enter value to insert: ");
                scanf("%d", &value);
                size = insertbyelement(arr, size, element, value);
                break;
            }

            case 5: {
                int element;
                printf("Enter element to delete: ");
                scanf("%d", &element);
                size = deletebyelement(arr, size, element);
                break;
            }

            case 6: {
                int value;
                printf("Enter value to search: ");
                scanf("%d", &value);
                int index = searcharray(arr, size, value);
                if (index == -1)
                    printf("Element not found.\n");
                else
                    printf("Element found at position %d.\n", index + 1);
                break;
            }

            case 7: {
                int pos, value;
                printf("Enter position to update (1-based): ");
                scanf("%d", &pos);
                printf("Enter new value: ");
                scanf("%d", &value);
                updateelement(arr, size, pos, value);
                break;
            }

            case 8:
                minelement(arr, size);
                break;
            case 9:
                maxelement(arr,size);
                break;

            case 10:
                selectionsort(arr, size);
                printf("Array sorted successfully by selection sort.\n");
                displayarray(arr, size);
                break;
            case 11:
                bubblesort(arr,size);
                printf("array sorted successfully by bubble sort\n");
                displayarray(arr,size);
                break;
            case 12:
                insertionsort(arr,size);
                printf("array sorted by insertionsort");
                displayarray(arr,size);
                break;   


            case 13:
                displayarray(arr, size);
                break;

            case 0:
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }
}

// Function to create array
int createarray(int arr[], int size) {
    do {
        printf("Enter the size of the array (max 100): ");
        scanf("%d", &size);
    } while (size > 100 || size <= 0);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array created successfully.\n");
    return size;
}

// Function to insert value at position
int insertarray(int arr[], int size, int pos, int value) {
    if (pos < 1 || pos > size + 1) {
        printf("Invalid position!\n");
        return size;
    }
    for (int i = size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    printf("Value inserted.\n");
    return size + 1;
}

// Function to delete value at position
int deletearray(int arr[], int size, int pos) {
    if (pos < 1 || pos > size) {
        printf("Invalid position!\n");
        return size;
    }
    for (int i = pos - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    printf("Element deleted.\n");
    return size - 1;
}

// Function to insert after element
int insertbyelement(int arr[], int size, int element, int value) {
    int i, pos = -1;
    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            pos = i + 2; // 1-based index after current
            break;
        }
    }
    if (pos == -1) {
        printf("Element not found.\n");
        return size;
    }
    return insertarray(arr, size, pos, value);
}

// Function to delete by element value
int deletebyelement(int arr[], int size, int element) {
    int i, pos = -1;
    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            pos = i + 1;
            break;
        }
    }
    if (pos == -1) {
        printf("Element not found.\n");
        return size;
    }
    return deletearray(arr, size, pos);
}

// Search function
int searcharray(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value)
            return i;
    }
    return -1;
}

// Update function
void updateelement(int arr[], int size, int pos, int value) {
    if (pos < 1 || pos > size) {
        printf("Invalid position!\n");
        return;
    }
    arr[pos - 1] = value;
    printf("Element updated.\n");
}

// Finding the minimum element
int minelement(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return -1;
    }
    int i, min = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Minimum element is: %d\n", min);
    return min;
}
// finding maximum element
int maxelement(int arr[],int size){
    if (size == 0) {
        printf("Array is empty.\n");
        return -1;
    }
    int i, max = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum element is: %d\n", max);
    return max;
}


// Sorting the array using Selection Sort
void selectionsort(int arr[], int size) {
    int i, j, min, temp;
    for (i = 0; i < size - 1; i++) {
        min = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
// sorting using bubble sort
void bubblesort(int arr[],int size){
  int i,j,temp;

  for(i=0;i<size;i++){// pass
    for(j=0;j<size-i-1;j++){// comparision
      if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
}
// sorting by insertion sort
void insertionsort(int arr[],int size){
    int temp,i,j;
  for(int i=1;i<size;i++){
    temp=arr[i];
    int j=i-1;
    while(j>=0 &&arr[j]>temp){
      arr[j+1]=arr[j];
      j=j-1;
    }
    arr[j+1]=temp;

  }
}


// Display array
void displayarray(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Current Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}