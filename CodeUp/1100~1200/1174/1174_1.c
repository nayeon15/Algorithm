/**************************************************************
1174번
nayeonvita
C
정확한 풀이코드 길이:239 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (void)
{
	int a, b, c;
	
	scanf ("%d %d", &a, &b);
	
	c = a * 60 + b;
	c = c - 30;
	c = 24 * 60 + c;
	c = c % (24*60);
	a = c / 60;
	b = c % 60;
	
	printf ("%d %d", a, b);
    
    return 0;
}
