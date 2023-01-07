#include <stdio.h>

int main() {
    int counter = 15;
    int *p = &counter;
    printf("counter: %d\n", counter);
    printf("counter: %ls\n", p);

    return 0;
}