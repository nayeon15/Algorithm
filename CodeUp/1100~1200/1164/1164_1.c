/**************************************************************
1164번
nayeonvita
C
정확한 풀이코드 길이:192 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (void)
{
	int a, b, c;
	
	scanf ("%d %d %d", &a, &b, &c);
	
	if (a > 170 && b > 170 && c > 170) printf ("PASS");
	else printf ("CRASH");
	
	return 0;
}
