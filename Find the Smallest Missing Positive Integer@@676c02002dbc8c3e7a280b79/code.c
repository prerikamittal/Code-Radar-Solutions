#include <stdio.h>

int main() {
    int n, a[1000], found;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 1; ; i++) {
        found = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == i) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
