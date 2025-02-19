#include <stdio.h>
int main() {
    float temp;
    scanf("%f", &temp);
    if (temp <= 0) {
        printf("Freezing \n");
    } else {
        printf("Above Freezing\n");
    }
    return 0;
}
