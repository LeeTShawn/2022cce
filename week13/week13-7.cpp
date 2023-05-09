#include <stdio.h>
int main(){
int i,c[100],t,b=0;
for(i=0;i<=100;i++){
scanf("%d",&c[i]);
if(c[i]==0) break;
}
scanf("%d",&t);
for(i=0;i<=9;i++){
if(c[i]==t)b++;
}
printf("%d\n",b);
}
