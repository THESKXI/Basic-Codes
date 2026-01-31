#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, arr[100];
    int max = INT_MIN, second = INT_MIN;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            second = max;
            max = arr[i];
        } else if (arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }
    printf("%d", second);
    return 0;
}

