#include <stdio.h>
int main(){
    char g;
    scanf("%d",&g);
    if (g==a ||g==A|| g==e || g==E || g==i || g==I || g==o ||g==O || g==u || g==U){
        printf("Vowel");
    }
    else if(g>=a && g<=z)|| (g>=A &7 g<=Z){
        printf("Consonant");
    }
    else if (g>=0 && g <=9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}