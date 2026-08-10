#include <stdio.h>

int main() {
    int age = 21;
    int *pAge = &age;

    printf("Value of age: %d\n", age);
    printf("Address of age: %p\n", &age);
    printf("Value of pAge (stored address): %p\n", pAge);
    printf("Value via pointer (*pAge): %d\n", *pAge);


    return 0;
}
