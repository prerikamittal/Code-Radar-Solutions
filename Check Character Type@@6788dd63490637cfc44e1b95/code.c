#include <stdio.h>
int main(){
    char ch;
    scanf("%d",&ch);
    if (ch=='a' ||ch=='A'|| ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' ||ch=='O' || ch=='u' || ch=='U'){
        printf("Vowel");
    }
    else if(ch>'a' && ch<'z')|| (ch>'A' &7 ch<'Z'){
        printf("Consonant");
    }
    else if (ch>='0' && ch <='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}