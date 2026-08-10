#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int A = 42, B = 53;

    printf("Before value of A: %d, B: %d\n", A, B);
    swap(&A, &B);
    printf("After value of A: %d, B: %d\n", A, B);



    return 0;
}