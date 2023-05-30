#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int ss = n%60;
	int mm = n/60%60;
	int hh = n/60/60;

	printf("%02d:%02d:%02d", hh, mm, ss);
}
