#include <stdio.h>
int main() {
    int age;
    scanf("%d", &age);
    if (age >= 60) {
        printf("Eligible for senior citizen discount\n");
    } else {
        printf("Not eligible for senior citizen discount\n");
    }
    return 0;
}
