#include <stdio.h>
int main(){
  int i=1,N;
  int s=0;
  scanf("%d",&N);
  for (i=1;i<=N;i++){
    s=s+i;
  } 
  printf("%d",s); 
  return 0;
}