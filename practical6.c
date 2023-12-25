#include <stdio.h>


void printOddIndexedElements(int arr[], int size) {
    printf("Odd-indexed elements: ");
    for (int i = 1; i < size; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
   
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    
    printOddIndexedElements(array, size);

 return 0;
}