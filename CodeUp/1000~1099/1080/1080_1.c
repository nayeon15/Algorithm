/**************************************************************
1080번
nayeonvita
C
정확한 풀이코드 길이:260 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main()
{
    int n, i = 1;
    int sum = 0;
    scanf("%d", &n);
    while (1)
    {
        sum += i;
        if (n <= sum)
        {
            printf("%d\n", i);
            break;
        }
        i++;
    
    }
}