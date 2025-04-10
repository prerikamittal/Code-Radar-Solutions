#include <stdio.h>

int main() {
    int n, a[1000], target;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &target);
    
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            index = i;
            break;
        }
    }
    
    printf("%d\n", index);
    return 0;
}
