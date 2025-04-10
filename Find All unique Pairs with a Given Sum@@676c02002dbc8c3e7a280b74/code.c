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
                int duplicate = 0;
                for (int k = 0; k < i; k++) {
                    for (int l = k + 1; l < n; l++) {
                        if (arr[k] + arr[l] == target) {
                            if ((arr[k] == arr[i] && arr[l] == arr[j]) || (arr[k] == arr[j] && arr[l] == arr[i])) {
                                duplicate = 1;
                                break;
                            }
                        }
                    }
                    if (duplicate) break;
                }
                if (!duplicate) {
                    printf("%d %d\n", arr[i], arr[j]);
                }
            }
        }
    }

    return 0;
}
