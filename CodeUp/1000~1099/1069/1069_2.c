/**************************************************************
1069번
nayeonvita
C
정확한 풀이코드 길이:337 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(void)
{
    char a;
    scanf("%c", &a);
    switch (a)
    {
        case 'A': printf("best!!!"); break;
        case 'B': printf("good!!"); break;
        case 'C': printf("run!"); break;
        case 'D': printf("slowly~"); break;
        default: printf("what?"); break;
    }
    return 0;
}
