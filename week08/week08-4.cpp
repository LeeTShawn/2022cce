#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=1; i<=n; i++){///�N�[
	    ///�Ů��+�Ӽh�On, �Ů�=n-1
		for(int k=1; k<=n-i; k++)printf(" ");
        ///�Ӽh�P�P�P�ƶq�@��
		for(int k=1; k<=i; k++)printf("*");
		printf("\n");
	}
}
