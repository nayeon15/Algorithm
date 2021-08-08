/**************************************************************
1045번
nayeonvita
C
정확한 풀이코드 길이:196 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (void)
{
    int a, b;
    
    scanf ("%d %d", &a, &b);
    printf ("%d\n%d\n%d\n%d\n%d\n%.2f\n", a+b, a-b, a*b, a/b, a%b, (float)a/b);
    
    return 0;
}
