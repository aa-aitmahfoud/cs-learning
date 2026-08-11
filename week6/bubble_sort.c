#include <stdio.h>
void bubble_sort(int arr[], int size) {
    for (int pass = 0; pass < size -1; pass++) {
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

}
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);

    }
    printf("\n");


}

int main () {

    int numbers[5] = {27, 3, 18, 34, 11};
    int size = 5;

    printf("Before sort: ");
    print_array(numbers, size);

    bubble_sort(numbers, size);
    printf("After sort: ");
    print_array(numbers, size);


    return 0;
}