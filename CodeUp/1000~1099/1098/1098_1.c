/**************************************************************
1098번
nayeonvita
C
정확한 풀이코드 길이:492 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main(){
    int w, h, n, d, x, y, l, a[150][150]={};

    scanf("%d %d", &h, &w);
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d%d%d%d", &l, &d, &x, &y);
        for(int j = 0; j < l; j++){
            if(d==1) a[x+j][y] = 1;
            else a[x][y+j] = 1;
        }
    }
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

