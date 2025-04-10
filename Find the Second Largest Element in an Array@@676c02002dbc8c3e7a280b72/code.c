#include <stdio.h>

int main() {
    int n, a[1000], max = -1, second = -1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > max) {
            second = max;
            max = a[i];
        } else if (a[i] > second && a[i] != max) {
            second = a[i];
        }
    }

    if (second == -1) printf("-1\n");
    else printf("%d\n", second);

    return 0;
}
