#include <stdio.h>
int main(){
    char g;
    scanf("%c",&g);
    if (g>=65 && g<=90){
        printf("Uppercse");
    }
    else if (g>=97 && g<=122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}