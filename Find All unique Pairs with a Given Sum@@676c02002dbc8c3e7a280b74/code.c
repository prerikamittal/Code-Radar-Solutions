#include <stdio.h>
int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                int isDuplicate = 0;
                for (int k = 0; k < i; k++) {
                    if ((arr[k] == arr[i] && arr[k + 1] == arr[j]) || (arr[k] == arr[j] && arr[k + 1] == arr[i])) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate) {
                    printf("%d %d\n", arr[i], arr[j]);
                }
            }
        }
    }
    return 0;
}
