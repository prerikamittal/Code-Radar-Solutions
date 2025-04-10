#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    int max = 1, count = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) continue;
        else if (a[i] == a[i - 1] + 1) count++;
        else count = 1;
        if (count > max) max = count;
    }

    printf("%d", max);
    return 0;
}
