#include <stdio.h>
int main()
{   /// �f�Z:�˹L�ӷQ
    int n;
    scanf("%d",&n);///�ոլ�n�O���O���
    int bad=0;
    for(int i=2;i<=n;i++)///�u��Q 1 �٦� n �����㰣
    {
        if(n%i==0)bad=1;
    }
    if (bad==0) printf("%d �O���",n);
    else printf("%d ���n, ���O���", n);
}
