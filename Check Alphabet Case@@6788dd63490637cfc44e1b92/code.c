#include <stdio.h>
int main(){
    char g;
    scanf("%d",&g);
    if (g>=65 && g<=90){
        printf("Lowercase");
    }
    else if (g>=97 && g<=122){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}