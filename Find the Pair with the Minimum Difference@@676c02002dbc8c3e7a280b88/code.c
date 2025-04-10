#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, a[1000];
    scanf("%d", &n);
    if (n < 2) return printf("-1\n"), 0;

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (a[i] > a[j]) {
                int t = a[i]; a[i] = a[j]; a[j] = t;
            }

    int min = abs(a[1] - a[0]), x = a[0], y = a[1];
    for (int i = 1; i < n - 1; i++)
        if (abs(a[i+1] - a[i]) < min)
            min = abs(a[i+1] - a[i]), x = a[i], y = a[i+1];

    printf("%d %d\n", x, y);
    return 0;
}
