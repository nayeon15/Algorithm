/**************************************************************
1025번
nayeonvita
C
정확한 풀이코드 길이:297 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (void)
{
    int a, b, c, d, e;
    
    scanf ("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
    printf ("[%d]\n", a*10000);
    printf ("[%d]\n", b*1000);
    printf ("[%d]\n", c*100);
    printf ("[%d]\n", d*10);
    printf ("[%d]", e);
    
    return 0;
}
