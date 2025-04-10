#include <stdio.h>

int main() {
    int n, a[1000], max = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0 && a[i] > max) max = a[i];
    }
    printf("%d\n", max);
    return 0;
}
