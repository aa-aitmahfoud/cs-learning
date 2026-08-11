#include <stdio.h>
int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;

}

int main () {

    int numbers[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int target;

    printf("Enter a number to search for: ");
    scanf("%d", &target);
    int index = linear_search(numbers, size, target);
    if (index == -1) {
        printf("Sorry the value %d not found\n", target);
    } else {
        printf("The value %d is found at index: %d\n", target, index);
    }

    return 0;
}

// Testing diff