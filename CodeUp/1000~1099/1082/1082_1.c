/**************************************************************
1082번
nayeonvita
C
정확한 풀이코드 길이:189 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (void)
{
    int a, b;
    
    scanf ("%x", &a);
    for (b = 1; b < 16; b++)
    {
        printf ("%X*%X=%X\n", a, b, a*b);
    }
    return 0;
}
