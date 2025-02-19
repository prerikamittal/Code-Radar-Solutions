#include <stdio.h>
int main() {
    float temp;
    scanf("%f", &temp);
    if (temp <= 0) {
        printf("Freezing or below freezing\n");
    } else {
        printf("Above freezing\n");
    }
    return 0;
}
