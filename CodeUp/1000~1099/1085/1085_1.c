/**************************************************************
1085번
nayeonvita
C
정확한 풀이코드 길이:221 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main()
{
    int h, b, c, s;
    double memory;
    scanf("%d %d %d %d", &h, &b, &c, &s);
    memory = ((double)h*(double)b*(double)c*(double)s)/8388608;
    printf("%0.1lf MB", memory);
}
