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

    int prod1 = a[n - 1] * a[n - 2];
    int prod2 = a[0] * a[1];
    if (prod1 > prod2) printf("%d", prod1);
    else printf("%d", prod2);

    return 0;
}
