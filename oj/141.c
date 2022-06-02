#include "stdio.h"

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        char ch = 'A' - 1;
        int j = 0;
        for(; j < i - 1; j++) {
            printf(" ");
            ch++;
        }
        int count = 2 * n - 2 * i + 3;
        for (int k = 1; k <= count; k ++) {
            if (k <= (count / 2 + 1)) {
                printf("%c", ++ch); 
                continue;
            }
            printf("%c", --ch );
        }
        printf("\n");
    }

    for (int i = 1; i <= n + 1; i++) {
        char ch = 'A' - 1;
        for (int j = 1; j <= n - i + 1; j++) {
            printf(" ");
            ch++;
        }
        for (int k = 1; k <= 2 * i - 1; k ++) {
            if (k <= (2 * i - 1) / 2 + 1) {
                printf("%c", ++ch);
                continue;
            }
            printf("%c", --ch);
        }
        printf("\n");           
    }

    return 0;
}