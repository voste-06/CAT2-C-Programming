#include <stdio.h>

int main(){
    int i, j;
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };

    //printf("");
    int scores2[2][2] = {
        {35, 70},
        {59, 67}
    };

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf(" %d ", scores[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf(" %d ", scores2[i][j]);
        }
        printf("\n");
    }
}