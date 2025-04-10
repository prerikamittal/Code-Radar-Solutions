#include <stdio.h>

int main() {
    int n, k, a[1000], count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        if (a[i] > k) count++;
    }

    printf("%d\n", count);
    return 0;
}
