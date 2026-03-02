//Davi James Vilela Guimaraes
//Felipe de Carvalho Andrade 

#include <stdio.h>

int main() {
    int N, i, x = 1;

    scanf("%d", &N);
    
    int H[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &H[i]);
    }

    if (N <= 2) {
        if (H[0] == H[1]) {
            x = 0;
        }     
    }
    else {
        for (i = 2; i < N; i++) {
            if (H[i] >= H[i - 1] && H[i - 2] <=  H[i - 1]) {
                x = 0;
                break;
            }
            else if (H[i] <= H[i - 1] && H[i - 2] >=  H[i - 1]) {
                x = 0;
                break;
            }
        }
    }
    if (x == 0) {
        printf("0\n");
    }
    else {
        printf("1\n");
    } 

    return 0;
}