#include <stdio.h>
#include <limits.h> 
void findAverageMinMax(long arr[], int n, double *average, long *max, long *min) {
    
    long sum = 0;
    *max = LONG_MIN; 
    *min = LONG_MAX; 

    
    for (int i = 0; i < n; i++) {
        sum += arr[i];

        
        if (arr[i] > *max) {
            *max = arr[i];
        }

        
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }

   
    *average = (double)sum / n;
}

int main() {
  
    int n ;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);


    if (n <= 0) {
    printf("Please enter a positive array size.\n");
        return 1; 
    }

    
    long array[n];

    
    printf("Enter %d long integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%ld", &array[i]);
    }

    
    double average;
    long max, min;

   
    findAverageMinMax(array, n, &average, &max, &min);

   
    printf("Average: %.2f\n", average);
    printf("Maximum element: %ld\n", max);
    printf("Minimum element: %ld\n", min);

    return 0;
}