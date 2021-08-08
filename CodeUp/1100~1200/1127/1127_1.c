/**************************************************************
1127번
nayeonvita
C
정확한 풀이코드 길이:209 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (void)
{
	int a, b, c;
	float x, y, z;
	
	scanf ("%f %d", &x, &a);
	scanf ("%f %d", &y, &b);
	scanf ("%f %d", &z, &c);
	
	printf ("%.1f", x*a+y*b+z*c);
	
	return 0;
}
