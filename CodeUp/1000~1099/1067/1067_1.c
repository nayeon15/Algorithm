/**************************************************************
1067번
nayeonvita
C
정확한 풀이코드 길이:205 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    if(a<0) printf("minus\n");
    else printf("plus\n");
    if(a%2==0) printf("even");
    else printf("odd");
    return 0;
}
