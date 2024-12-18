#include <stdio.h>

int main() {
    int arr[5] = {10, 25, 3, 7, 15};
    int max = arr[0], min = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Phần tử lớn nhất: %d\n", max);
    printf("Phần tử nhỏ nhất: %d\n", min);

    return 0;
}
