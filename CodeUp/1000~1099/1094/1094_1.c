/**************************************************************
1094번
nayeonvita
C
정확한 풀이코드 길이:202 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main(){
    int a[10000]={}, n, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for(i = n; i>= 1; i--)
        printf("%d ", a[i]);
}