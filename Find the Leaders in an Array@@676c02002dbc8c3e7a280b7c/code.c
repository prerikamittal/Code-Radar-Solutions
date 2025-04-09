#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int leaders[n]; // To store leaders
    int count = 0;

    int max_from_right = arr[n - 1];
    leaders[count++] = max_from_right; // Last element is always a leader

    // Traverse from right to left and collect leaders
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= max_from_right) {
            max_from_right = arr[i];
            leaders[count++] = max_from_right;
        }
    }

    // Print in reverse to get original order
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    printf("\n");
    return 0;
}
