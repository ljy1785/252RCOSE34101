#include <stdio.h>

int main(void) {
    int arr[5] = {3, 9, 1, 7, 4};
    int max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) max = arr[i];
    }
    printf("%d\n", max);
    return 0;
}
