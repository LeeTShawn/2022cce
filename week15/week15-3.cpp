#include <stdio.h>
///49�N�O�p�g'1'
///65�N�O�p�g'A'
///97�N�O�p�g'a'
int main()
{
    printf("A ���ȬO %d\n", 'A');///�L�XA���ȬO65
    printf("B ���ȬO %d\n", 'B');///�L�XB���ȬO66
    printf("C ���ȬO %d\n", 'C');///�L�XC���ȬO67

    for(int c = 'A'; c<='Z'; c++){
        printf("%c ���ȬO %d\n", c, c);
    }
}
