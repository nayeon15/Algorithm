/**************************************************************
1072번
nayeonvita
C
정확한 풀이코드 길이:195 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (void)
{
    int n, m;
    
    scanf ("%d", &n);
reget:
    scanf ("%d", &m);
    printf ("%d\n", m);
    if (--n != 0) goto reget;
    
    return 0;
}
