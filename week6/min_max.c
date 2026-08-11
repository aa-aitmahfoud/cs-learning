#include <stdio.h>

void min_max (int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 0; i < size; i++) {
        if (*min > arr[i]) {
            *min = arr[i];
        }
        if (*max < arr[i]) {
            *max = arr[i];
        }
    }


}

int main () {
    int numbers[5] = {15, 3, 27, 8, 19};
    int size = 5;
    int min, max;

    min_max(numbers, size, &min, &max);

    printf("Min value is: %d\n", min);
    printf("Max value is: %d\n", max);




    return 0;
}