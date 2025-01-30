#include <stdio.h>
int main(){
    char g;
    scanf("%d",&g);
    if (g>=65 && g<=90){
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
    return 0;
}