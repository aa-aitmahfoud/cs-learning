#include <stdio.h> 

void double_value(int *p) {
    *p = *p * 2;
}

int main() {
    int A = 42;
    printf("Value before: %d\n", A);
    double_value(&A);
    printf("Value after: %d\n", A);


    return 0;
}