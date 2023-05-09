#include <stdio.h>
int main(){
int a,i,x[20];
scanf("%d",&a);
for(i=1;i<=a;i++){
scanf("%d",&x[i]);
printf("%d,",x[i]*x[i]);
}
printf("\n");
}
