#include <stdio.h>

int main() {
    int a[3], b[3], sum[3];

    printf("Enter 3 numbers for array A:\n");
    for (int i = 0; i < 3; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter 3 numbers for array B:\n");
    for (int i = 0; i < 3; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 3; i++) {
        sum[i] = a[i] + b[i];
    }
    printf("Sum array: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");
    return 0;

}