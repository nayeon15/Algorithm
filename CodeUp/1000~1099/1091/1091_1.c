/**************************************************************
1091번
nayeonvita
C
정확한 풀이코드 길이:260 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (void)
{
    long long int a, m, d, n;
    int i;
    
    scanf ("%lld %lld %lld %lld", &a, &m, &d, &n);
    for (i = 1; i <= n-1; i++)
    {
        a = a * m + d;
    }
    printf ("%lld", a);
    
    return 0;
}
