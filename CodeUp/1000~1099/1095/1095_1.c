/**************************************************************
1095번
nayeonvita
C
정확한 풀이코드 길이:277 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main(){
    int n[10000], a, min;
    scanf("%d", &a);
    for(int i=1; i<=a;i++){
        scanf("%d", &n[i]);
    }
    for(int i = 1; i <= a; i++){
        if (n[i] < min){
            min = n[i];
        }
    }
    printf("%d", min);
}
