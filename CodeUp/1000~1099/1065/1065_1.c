/**************************************************************
1065번
nayeonvita
C
정확한 풀이코드 길이:285 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (void)
{
    int a, b, c;
    
    scanf ("%d %d %d", &a, &b, &c);
    
    if (a % 2 == 0)
        printf ("%d\n", a);
    if (b % 2 == 0)
        printf ("%d\n", b);
    if (c % 2 == 0)
        printf ("%d\n", c);
        
    return 0;
}
