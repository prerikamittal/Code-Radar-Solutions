#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int num;
    scanf("%d", &num);
    decimalToBinary(num);
    printf("\n");
    return 0;
}
