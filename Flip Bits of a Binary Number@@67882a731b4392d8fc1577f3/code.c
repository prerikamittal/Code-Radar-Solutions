#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);
    num = ~num;
    printf("%u\n", num);
    return 0;
}
