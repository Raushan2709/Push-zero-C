// selection alorithm
#include<stdio.h>
int main()
{
    int ar[5]={5,0,7,0,8};
    int n=5;
    int ans[n];
    int idx=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]!=0)
        {
            ans[idx]=ar[i];
            idx++;
        }
    }
    while(idx!=n){
    ans[idx]=0;
    idx++;
    }
    for(int i=0;i<n ;i++)
    printf("%d",ans[i]);
    return 0;
}