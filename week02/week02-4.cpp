///準備好整數 a, b
///讀入 a, b
///印出 a+b
#include <stdio.h> ///ok

int main() ///ok
{
    int a, b; ///剛剛課本有看到 ok
    printf( "請用鍵盤輸入兩個整數: " );
    scanf( "%d", &a );
    scanf( "%d", &b );
    printf( "你讀入了 %d %d \n", a, b);
    printf( "它們加起來是: %d \n" , a+b );
}
