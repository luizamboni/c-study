#include <stdio.h>
#include "sum.h"

int main() {

    int numbers[] = {115,2,5,6,7};

    int length = (int) (sizeof(numbers)/sizeof(int));
    printf("lenght %d\n",length);

    printf("hello world %d\n", Sum(numbers, length));
    return 0;
}