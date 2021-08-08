/**************************************************************
1109번
nayeonvita
C
정확한 풀이코드 길이:265 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main (void)
{
	char name[20];
	int age;
	char code[20];
	float key;
	
	scanf ("%s", &name);
	scanf ("%d", &age);
	scanf ("%s", &code);
	scanf ("%g", &key);
	
	printf ("%s\n%d\n%s\n%g\n", name, age, code, key);
	
	return 0;
}
