#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int co=0;
    int ce=0;
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            ce+=1;
        }
        else{
            co+=1;
        }
    }
    printf("%d %d", ce,co);
}