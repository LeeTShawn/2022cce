#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=1; i<=n; i++){///芅琜
	    ///计+加糷琌n, =n-1
		for(int k=1; k<=n-i; k++)printf(" ");
        ///加糷籔琍琍计秖妓
		for(int k=1; k<=i; k++)printf("*");
		printf("\n");
	}
}
