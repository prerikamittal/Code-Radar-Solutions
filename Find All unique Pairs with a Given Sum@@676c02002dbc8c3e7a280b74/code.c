#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                int alreadyPrinted = 0;
                for (int k = 0; k < i; k++) {
                    for (int l = k + 1; l < n; l++) {
                        if (arr[k] + arr[l] == target) {
                            if ((arr[k] == arr[i] && arr[l] == arr[j]) || (arr[k] == arr[j] && arr[l] == arr[i])) {
                                alreadyPrinted = 1;
                                break;
                            }
                        }
                    }
                    if (alreadyPrinted) break;
                }
                if (!alreadyPrinted) {
                    printf("%d %d\n", arr[i], arr[j]);
                }
            }
        }
    }

    return 0;
}
