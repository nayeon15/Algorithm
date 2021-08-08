/**************************************************************
1070번
nayeonvita
C
정확한 풀이코드 길이:450 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    switch(a)
    {
        case 12:
        case 1:
        case 2:
        printf("winter");break;
        case 3:
        case 4:
        case 5:
        printf("spring");break;
        case 6:
        case 7:
        case 8:
        printf("summer");break;
        case 9:
        case 10:
        case 11:
        printf("fall");break;
    }
    return 0;
}
