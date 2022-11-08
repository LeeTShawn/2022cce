#include <stdio.h>
int main()
{
    int a[4];
    printf("a[0]: %d\n", a[0]);///把a[0]拿來用, 亂碼

    a[0] = 33;///在最前面那個放33
    printf("a[0]: %d\n", a[0]);///把a[0]拿來用
}
