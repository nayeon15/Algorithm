/**************************************************************
1086번
nayeonvita
C
정확한 풀이코드 길이:206 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main()
{
    int w, h, b;
    scanf("%d %d %d", &w, &h, &b);
    double result;
    result = ((double)w * (double)h * (double)b) / 8388608;
    printf("%0.2f MB", result);
}
