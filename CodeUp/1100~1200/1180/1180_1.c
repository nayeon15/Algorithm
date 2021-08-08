/**************************************************************
1180번
nayeonvita
C
정확한 풀이코드 길이:325 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
 
 int main (void)
{
    int num , a, b;
    scanf("%d",&num);
    
    a = num/10;
    b = num%10;
    
    num = (b*10 + a) *2;
    if(num >=100){num = num -100;}
    printf("%d\n",num);
    if(num <=50)
	{
        printf("GOOD");
    }
    else printf("OH MY GOD");
 
    return 0;
}
