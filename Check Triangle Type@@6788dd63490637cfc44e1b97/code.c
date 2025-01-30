#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a!=b && a!=c && b!=c){
        printf("Scalene");
    }
    else if((a==b&&a!=c)||(a==c$$a!=b)||(b==a&&b!=c)||(b==c&&b!=a)){
        printf("Isosceles");
    }
    else{
        printf("Equilateral");
    }

    return 0;
}