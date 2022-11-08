#include <stdio.h>
int main()
{   /// 口訣:倒過來想
    int n;
    scanf("%d",&n);///試試看n是不是質數
    int bad=0;
    for(int i=2;i<=n;i++)///只能被 1 還有 n 本身整除
    {
        if(n%i==0)bad=1;
    }
    if (bad==0) printf("%d 是質數",n);
    else printf("%d 不好, 不是質數", n);
}
