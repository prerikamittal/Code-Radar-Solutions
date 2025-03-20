#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
   int arr[N];
    for (int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    for (int i=0;i<n;i++){
        if (min>arr[i]){
            min=arr[i]
        }
        if (max<arr[i]){
            max=arr[i];
        }
        printf("%d %d", min,max);
    }

}