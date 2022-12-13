#include <stdio.h>
///49就是小寫'1'
///65就是小寫'A'
///97就是小寫'a'
int main()
{
    printf("A 的值是 %d\n", 'A');///印出A的值是65
    printf("B 的值是 %d\n", 'B');///印出B的值是66
    printf("C 的值是 %d\n", 'C');///印出C的值是67

    for(int c = 'A'; c<='Z'; c++){
        printf("%c 的值是 %d\n", c, c);
    }
}
