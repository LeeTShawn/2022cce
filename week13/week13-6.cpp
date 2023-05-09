#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	m=(n/1000)*8+(n%1000)/100*4+(n%100)/10*2+(n%10)*1;
	printf("%d\n",m);


}
