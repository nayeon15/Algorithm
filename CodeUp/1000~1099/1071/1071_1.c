/**************************************************************
1071번
nayeonvita
C
정확한 풀이코드 길이:178 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>

int main()
{
    int n;
reload: 
    scanf("%d", &n);
    if(n==0) goto end;
    printf("%d\n", n);
    if(n!=0) goto reload;
end:
     return 0;
}
