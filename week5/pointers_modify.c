#include <stdio.h>
void set2zero(int *p) {
    *p = 0;
}
int main () {
    int value = 42;

    printf("The value before: %d\n", value);
    set2zero(&value);
    printf("The value after: %d\n", value);

    return 0;
}
