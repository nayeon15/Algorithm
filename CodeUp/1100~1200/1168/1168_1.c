/**************************************************************
1168번
nayeonvita
C
정확한 풀이코드 길이:215 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
 
int main(){
    int a,b,c,d,e,f,num;
    
    scanf("%d %d", &a, &num);
    if(num == 1 || num == 2){
        printf("%d", 13 + 100 - (a/10000));
    }else printf("%d", 13 - a/10000);
}