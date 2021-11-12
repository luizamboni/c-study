#include <stdio.h>

int Sum(int numbers[], int len) {
    int sum = 0;


    for(int i = 0; i < len; ++i) {
        int number = numbers[i];
        printf("index: %d\n", i);
        printf("number %d\n", number);
        sum += number;
    }

    return sum;
} 