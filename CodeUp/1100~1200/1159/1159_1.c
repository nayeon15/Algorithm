/**************************************************************
1159번
nayeonvita
C
정확한 풀이코드 길이:198 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (void)
{
	int a;
	
	scanf ("%d", &a);
	
	if (50 <= a && a <= 70) printf ("win");
	else if (a % 6 == 0) printf ("win");
	else printf ("lose");
	
	return 0;
}
