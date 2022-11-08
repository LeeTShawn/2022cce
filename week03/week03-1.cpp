///Week03-1.cpp
///運算:+ - * / %
#include <stdio.h>
int main()
{
    int a, b;
    printf("輸入兩個數:");
    scanf("%d%d", &a, &b);

    printf("%d + %d 是 %d\n", a, b, a+b);
    printf("%d - %d 是 %d\n", a, b, a-b);
    printf("%d * %d 是 %d\n", a, b, a*b);
    printf("%d / %d 是 %d\n", a, b, a/b);
    printf("%d 除法%d的餘數是%d是 %d\n",a,b,a&b);
}
