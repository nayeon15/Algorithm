/**************************************************************
1076번
nayeonvita
C
정확한 풀이코드 길이:174 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
    char n, m = 'a';
    scanf("%c",&n);
    do
    {
        printf("%c ", m);
        m++;
    }
    while(m<=n);
    return 0;
}
