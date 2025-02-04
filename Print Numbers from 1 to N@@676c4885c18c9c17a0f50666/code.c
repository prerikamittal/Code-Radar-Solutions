#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for (int a=1;a<=N;a++){
        printf("%d", a);
        if (a>1){
            printf(" ");
        }
    }
    return 0;
}