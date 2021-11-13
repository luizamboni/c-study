#include <stdio.h>

void printArrayElements(int array[], int len) {
    printf("-------------------------- \n");
    for(int i = 0; i<len;++i){
        int item = array[i];
        printf("array[%d] is %d\n", i, item);
    }
}

void printArrayByPointer(int *pointer, int len) {
    printf("-------------------------- \n");
   for(int i = 0; i<len;++i){
        int item = *(pointer + i);
        printf("*(pointer + %d) is %d\n", i, item);
    }
}

int main() {

    int fixedArray[5] = { 1, 2, 3, 4, 6 };
    // if switch has a error because size is 5
    // int fixedArray[5] = {1,2,3,4,6,10};

    printArrayElements(fixedArray, 5);

    // here, the size is defined in compile time
    int array[] = { 1, 2, 3, 4, 6, 10 };
    printArrayElements(array, 5);

    // it was error too, its not possible use variable size
    // without assign value
    // int array[];

    // a pointer to &array[0]
    int *arrayPointer = array;
    printArrayByPointer(arrayPointer, 5);

    // assign thouth pointer
    *(arrayPointer + 4) = 600;
    printArrayByPointer(arrayPointer, 5);

    return 0;
}