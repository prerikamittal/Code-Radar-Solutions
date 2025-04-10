#include <stdio.h>

int main() {
    int n, a[1000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int peak = -1;

    for (int i = 0; i < n; i++) {
        if ((i == 0 && a[i] > a[i + 1]) || 
            (i == n - 1 && a[i] > a[i - 1]) ||
            (i > 0 && i < n - 1 && a[i] > a[i - 1] && a[i] > a[i + 1])) {
            peak = a[i];
            break;
        }
    }

    printf("%d\n", peak);
    return 0;
}
