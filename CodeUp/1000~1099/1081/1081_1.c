/**************************************************************
1081번
nayeonvita
C
정확한 풀이코드 길이:254 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (void)
{
    int a, b, i, j;
    
    scanf ("%d %d", &a, &b);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= b; j++)
        {
            printf ("%d %d\n", i, j);
        }
    }
    return 0;
}
