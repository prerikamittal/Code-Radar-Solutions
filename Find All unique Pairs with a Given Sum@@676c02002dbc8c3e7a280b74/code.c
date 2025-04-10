#include <stdio.h>
int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];
    int freq[100001] = {0}; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }
    scanf("%d", &target);
    for (int i = 0; i < n; i++) {
        int a = arr[i];
        int b = target - a;
        if (freq[a] > 0 && freq[b] > 0) {
            if (a == b && freq[a] >= 2) {
                printf("%d %d\n", a, b);
            } else if (a < b) {
                printf("%d %d\n", a, b);
            }
            freq[a] = 0;
            freq[b] = 0;
        }
    }
    return 0;
}
