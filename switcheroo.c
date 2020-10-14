#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[10];
    srand(time(NULL));
    int i;

    for(i = 0; i < 10; i++) arr[i] = rand();

    arr[9] = 0;

    printf("First array:\n");
    for(i = 0; i < 10; i++) printf("%d\n", arr[i]);

    int sec_arr[10];
    int *p1 = arr;
    int *p2 = sec_arr;

    for(i = 0; i < 10; i++) {
        *(p2 + i) = *(9 - i + p1);
    }

    printf("\nSecond array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d\n", *(p2 + i));
    }

}
