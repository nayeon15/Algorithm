/**************************************************************
1092번
nayeonvita
C
정확한 풀이코드 길이:199 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (){
    int a, b, c;
    int day = 1;
    scanf("%d %d %d", &a, &b, &c);

    while(day % a != 0 || day % b != 0 || day % c != 0) day++;
    printf("%d", day);
}
