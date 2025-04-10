#include <stdio.h>

int main() {
    int n, flag = 1;
    scanf("%d", &n);
    int a[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag == 1) printf("YES");
    else printf("NO");
    return 0;
}
