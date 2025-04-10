#include <stdio.h>
#include <limits.h>

int main() {
    int n, a[1000], max = INT_MIN, found = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0 && a[i] > max) {
            max = a[i];
            found = 1;
        }
    }
    if (found)
        printf("%d\n", max);
    else
        printf("-1\n");
    return 0;
}
