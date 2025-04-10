#include <stdio.h>

int main() {
    int n, a[1000], found = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                printf("%d\n", a[i]);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    if (!found)
        printf("-1\n");
    return 0;
}
