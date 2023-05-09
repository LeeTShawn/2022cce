#include <stdio.h>
int main(){
char A[4];
int i;
for(i=0;i<4;i++)
scanf("%c", &A[i]);

if(A[0]==A[3]&&A[1]==A[2])printf("YES\n");
else printf("NO\n");
}
