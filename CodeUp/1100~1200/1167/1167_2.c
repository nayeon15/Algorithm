/**************************************************************
1167번
nayeonvita
C
정확한 풀이코드 길이:348 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (void)
{
	int n1, n2, n3, temp1;
	
	scanf ("%d %d %d", &n1, &n2, &n3);
	
	if (n1 >= n2)
	{
		temp1 = n2;
		n2 = n1;
		n1 = temp1;
	}
	if (n2 >= n3)
	{
		temp1 = n3;
		n3 = n2;
		n2 = temp1;
	}
	if (n1 >= n2)
	{
		temp1 = n2;
		n2 = n1;
		n1 = temp1;
	}
	
	printf ("%d", n2);
	
	return 0;
}
