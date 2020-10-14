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

    for(i = 0; i < 10; i++) {
        *(sec_arr + i) = *(9 - i + arr);
    }

    printf("\nSecond array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d\n", *(sec_arr + i));
    }

}
