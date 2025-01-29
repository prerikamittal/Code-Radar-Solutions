#include <stdio.h>
int main(){
    char name[100];
    int age;
    char hobby[100];
    scanf("%c%d%c",&name,&age,&hobby);
    printf("Name: %c\nAge: %d\n Hobby:",name,age,hobby);
    return 0;
}