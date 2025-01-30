#include <stdio.h>
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if (a==b&&a==c){
        printf("Equilateral");
    }
    else if (a!=b && a!=c && b!=c){
        printf("Scalene");
    }
    else{
        printf("Isoceles");
    }
    return 0;
}