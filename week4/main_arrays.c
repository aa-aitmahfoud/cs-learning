#include <stdio.h>
#include "arrays_utils.h"

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int size = 5;
    print_array(numbers, size);

    int total = sum_array(numbers, size);

    printf("Sum = %d\n", total);

    return 0;
}