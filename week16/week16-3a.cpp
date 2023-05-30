#include <stdio.h>
int main()
{
	char c;
	while(scanf("%c", &c) == 1){
		if(c!='2') printf("%c", c);
	}
}
