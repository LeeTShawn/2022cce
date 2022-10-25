# 2022cce
## week06-1 利用兩層迴圈畫星星,老師的口訣是利用「左手i、右手j」的方式思考,先把 i:5 i:4 i:3 i:2 i:1 印出來, 使用倒過來的迴圈,j迴圈, 則是用基礎型.
```cpp
#include <stdio.h>
int main()
{
    for(int i=5; i>0; i--){
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("i:%d星星\n", i);
    }
}
```
## week06-2 用「左手i 當鷹架, 右手j 一直做」的口訣,畫等腰三角形.最後用 for(int k=0; k<space; k++) 的迴圈, 來畫出空格, 利用 for(int k=0; k<star; k++) 的迴圈, 來畫出星星
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int space=5-i, star=2*i-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");
    }
}
```
## week06-3 做兩數約分,使用 1個for迴圈 for(int i=1; i<=a; i++) 去試全部的數, 這個數 i 如果可以兩個都整除 if(a%i==0 && b%i==0) 
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個整數,要約分: ");
    int a, b;
    scanf("%d %d", &a, &b);

    int ans;
    for(int i=1; i<=a; i++){
        if( a%i==0 && b%i==0 ){
            ans = i;
        }
    }
    printf("ans: %d 可約分", ans);
}
```
## week06-4 用「輾轉相除法」可以找最大公因數。利用口訣老大a、老二b、老三c=a%b 如果是0 則老二b是答案。老二變老大、老三變老二, 繼續做來完成.
```cpp
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    while(1){
        c = a%b;
        printf("老大:%d 老三:%d\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案b: %d", b);
}
```
## week07-1 用CodeBlocks比較 int 整數 及 long long int 很長很長的整數的差別,long long int 可以裝比較長的整數。
```cpp
#include <stdio.h>
int main()
{
    int n=9876543210;
    printf("int 印出來 %d/n", n);

    long long int a=9876543210;
    printf("long long int 印出來 %lld\n", a);
}
```
## week07-2 用 long long int 很長很長的整數來計算最大公因數。
```cpp
#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b );

    long long int ans;
    for( long long int i=1; i<=a; i++){
        if( a%i==0 && b%i==0 ) ans = i;
    }
    printf("最大公因數是:%lld\n", ans);
}
```
## week07-3 用 long long int 很長很長的整數來計算輾轉相除法.
```cpp
#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld %lld", &a, &b);
    while(1){
        c = a % b;
        printf("a:%lld b:%lld c:%lld\n", a, b, c);
        if( c==0 ) break;
        a = b;
        b = c;
    }
    printf("答案是:%lld\n", b);
}
```
## week07-4 「10進位轉2進位」用一種「剝皮」的技巧。從個位數來剝, 把 123456789 分別剝出 9 8 ... 1  n = n / 10 能把數字慢慢變小.
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    printf("現在的個位數:%d\n", n%10);
    n = n / 10;

    printf("現在的個位數:%d\n", n%10);
    n = n / 10;

    printf("現在的個位數:%d\n", n%10);
    n = n / 10;

    printf("現在的個位數:%d\n", n%10);
    n = n / 10;

    printf("現在的個位數:%d\n", n%10);
    n = n / 10;

    printf("現在的個位數:%d\n", n%10);
    n = n / 10;

    printf("現在的個位數:%d\n", n%10);
    n = n / 10;
}
```
## week08-1 使用for迴圈, 去試2...n-1的數(因為1和n本身,一定會整除)。用一個變數 int bad=0 表示迴圈之前沒有壞掉。如果有整除, 就壞掉、不再是質數。迴圈後,看bad的值, 就知道是不是經過嚴格檢查的質數。
```cpp
#include <stdio.h>
int main()
{   /// 口訣:倒過來想
    int n;
    scanf("%d",&n);///試試看n是不是質數
    int bad=0;
    for(int i=2;i<=n;i++)///只能被 1 還有 n 本身整除
    {
        if(n%i==0)bad=1;
    }
    if (bad==0) printf("%d 是質數",n);
    else printf("%d 不好, 不是質數", n);
}
```
## week08-2 先用一個大迴圈, 印出全部的數, 了解2...a 的範圍的迴圈。接下來, 利用 week08-1.cpp 程式碼的核心, 來判斷 n 是不是質數。
```cpp
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    for(int n=2; n<=a; n++){

        int bad=0;
        for(int i=2; i<n; i++){
            if(n%i==0)bad=1;
        }
        if(bad==0)printf("%d", n);
    }
}
```
## week08-3 輸入5個數字, 把它們加起來。迴圈前面 int sum=0; 迴圈中間修改 sum += n; 迴圈後面 把 sum 印出來。
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入5個數字(要加起來): ");

    int n;
    int sum=0;
    for(int i=0; i<5; i++){
        scanf("%d", &n);
        sum += n;
    }
    printf("總合是:%d", sum);
}
```
## week08-4 (1)善用迴圈「建立鷹架(樓層i)」, (2)再把星星搞定, (3) 再把空格搞定, (4) 再拆掉鷹架.
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=1; i<=n; i++){///鷹架
	    ///空格數+樓層是n, 空格=n-1
		for(int k=1; k<=n-i; k++)printf(" ");
        ///樓層與星星數量一樣
		for(int k=1; k<=i; k++)printf("*");
		printf("\n");
	}
}
```
## week08-5 口訣是,正方形。先能用星星印出正方形,接下來if(判斷)來決定什麼時候改印空格, 就要再導一下 第i樓有n-i個空格, 所以 if(k=n-i)時,都印空格,便完成了。
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int k=1; k<=n; k++){
            printf("*");
        }
        printf("\n");
    }
}
```
## week08-6 先用前面2個程式作業來引選, 有正方形, 配合 if(判斷)來決定誰印空格、誰印星星後, 再把前一個程式, 逐一把 for迴圈的前面初始變數、中間判斷、後面收尾, 變成 while迴圈的樣子。翻譯完就成功了。
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int i=1;
    while(i<=n){

        int k=1;
        while(k<=n){

            if(k<=n-i)printf(" ");
            else printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
}
```
