#include<stdio.h>
int main(){
    
int n ;
scanf("%d",&n);
int arr[n];
int c=0;
for (int i=0;i<n;i++)
{
    scanf("%d ",&arr[i]);
}
for(int i=0;i<n;i++)
{
    if(arr[i]==-1)
    {
        continue;
    }
    c=1;
    for(int j=i+1;j<n;j++)
    {
        if (arr[j]==arr[i])
        {
            c++;
            arr[j]=-1;
        }
    }
    printf("%d %d\n",arr[i],c);

}

    return 0;
}