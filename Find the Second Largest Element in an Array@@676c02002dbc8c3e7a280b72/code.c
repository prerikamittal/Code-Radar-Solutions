#include <stdio.h>

int main() {
    int n, a[1000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int max = a[0], second = -1;

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            second = max;
            max = a[i];
        } else if (a[i] < max && (second == -1 || a[i] > second)) {
            second = a[i];
        }
    }

    if (second == -1) printf("-1\n");
    else printf("%d\n", second);

    return 0;
}
