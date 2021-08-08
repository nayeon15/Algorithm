/**************************************************************
1158번
nayeonvita
C
정확한 풀이코드 길이:206 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (void)
{
	int a;
	
	scanf ("%d", &a);
	
	if (30 <= a && a <= 40) printf ("win");
	else if (60 <= a && a <= 70) printf ("win");
	else printf ("lose");
	
	return 0;
}
