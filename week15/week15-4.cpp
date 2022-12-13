#include <stdio.h>
int main()
{
    char line[] = "Hello World\n";

    printf("%c\n", line[0] );
    for(int i=0; i<12; i++){ ///i: 0,1,2,3,4,5 ¦@¤»ÃD
        printf("=%c=", line[i] );
    }
}
