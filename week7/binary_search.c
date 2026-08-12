#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = (left + right)/2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;

}

int main () {

    int numbers[5] = {3, 8, 12, 15, 27};
    int size = 5;
    int target;

    printf("Enter a number to search for: ");
    scanf("%d", &target);

    int index = binary_search(numbers, size, target);

    if (index == -1) {
        printf("Value %d not found.\n", target);
    } else {
        printf("Value %d found at index %d.\n", target, index);
    }


    return 0;
}