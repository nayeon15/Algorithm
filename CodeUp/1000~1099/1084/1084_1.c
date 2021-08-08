/**************************************************************
1084번
nayeonvita
C
정확한 풀이코드 길이:404 byte(s)
수행 시간:265 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (void)
{
    int i, j, k, c = 0;
    int r, g, b ;
    
    scanf ("%d %d %d", &r, &g, &b);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < g; j++)
        {
            for (k = 0; k < b; k++)
            {
                printf ("%d %d %d\n", i, j, k);
                c++;
            }
        }
    }
    printf ("%d", c);
    return 0;
}
