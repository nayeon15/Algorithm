/**************************************************************
1153번
nayeonvita
C
정확한 풀이코드 길이:179 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (void)
{
	int a, b;
	
	scanf ("%d %d", &a, &b);
	
	if (a>b) printf (">");
	else if (a<b) printf ("<");
	else printf ("=");
	
	return 0;
}
