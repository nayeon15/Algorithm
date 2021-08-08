/**************************************************************
1066번
nayeonvita
C
정확한 풀이코드 길이:383 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (void)
{
    int a, b, c;
    
    scanf ("%d %d %d", &a, &b, &c);
    
    if (a % 2 == 0) printf ("%s\n", "even");
    else printf ("%s\n", "odd");
    
    if (b % 2 == 0) printf ("%s\n", "even");
    else printf ("%s\n", "odd");
    
    if (c % 2 == 0) printf ("%s\n", "even");
    else printf ("%s\n", "odd");
    
    return 0;
}
