/**************************************************************
1068번
nayeonvita
C
정확한 풀이코드 길이:215 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main (void)
{
    int a;
    scanf("%d", &a);
    if (a>=90&&a<=100) printf("A");
    else if (a<90&&a>=70) printf("B");
    else if (a<70&&a>=40) printf("C");
    else printf("D");
}
