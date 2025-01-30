#include <stdio.h>
int main(){
    char g;
    int a;
    scanf("%c",&g);
    a=(int)g;
    if (a>=65 && a<=90){
        printf("Uppercse");
    }
    else if (a>=97 && a<=122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}