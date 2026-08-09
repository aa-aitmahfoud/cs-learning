#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    int result = add(x, y);

    printf("Sum = %d\n", result);


    return 0;
}
// comment try