/**************************************************************
1172번
nayeonvita
C
정확한 풀이코드 길이:1111 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
 
int main(){
    int a,b,c;
    int min=9999999;
    int min2=99999999;
    int count = 0;
    scanf("%d %d %d",&a,&b,&c);
    
    if(a < b && a < c){
        if(b < c)printf("%d %d %d",a,b,c);
        else printf("%d %d %d",a,c,b);
        count++;
    }
    
    if(b < a && b < c){
        if(a < c)printf("%d %d %d",b,a,c);
        else printf("%d %d %d",b,c,a);
        count++;
    }
    
    if(c < b && c < a){
        if(b < a)printf("%d %d %d",c,b,a);
        else printf("%d %d %d",c,a,b);
        count++;
    }
    
    if(a == b && c == a && b == c)printf("%d %d %d",a,a,a);
    
    else if(a == b && a != c){
        if(count == 0){
        if(a < c)printf("%d %d %d",a,a,c);
        else printf("%d %d %d",c,a,a);
    }
    }
    else if(a == c && a != b){
        if(count == 0){
        if(a < b)printf("%d %d %d",a,a,b);
        else printf("%d %d %d", b,a,a);
    }
    }
    else if(b == c && b != a){
        if(count == 0){
        if(b < a)printf("%d %d %d",b,b,a);
        else printf("%d %d %d",a,b,b);
    }
    }
}
