#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	if(n<0) n = -n;

	while(n>10){
		n = n/10;
	}
	printf("%d\n", n);
}
