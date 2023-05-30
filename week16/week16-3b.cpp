#include <stdio.h>
int main()
{
	int a[10] = {};

	char c;
	while(scanf("%c", &c)==1){
		a[c-'0']++;
	}
	for(int i=1; i<=6; i++){
		printf("%d:%d\n", i, a[i]);
	}
}
