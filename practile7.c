#include <stdio.h>


int findLargestElement(int arr[], int size) {
    
    int largest = arr[0];

    
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    
    int array[] = {12, 45, 77, 20, 56,  43, 67};
    int size = sizeof(array) / sizeof(array[0]);

    
    int largestElement = findLargestElement(array, size);
    printf("The largest element in the array is: %d\n", largestElement);

     return 0;
}