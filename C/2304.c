#include <stdio.h>
#include <string.h>

int main() {
    double I, N, X, i, D, E, F;
    char T[30], P[30], A[30], c[] = "C", v[] = "V", a[] = "A", d[] = "D", e[] = "E", f[] = "F";

    scanf("%lf %lf", &I, &N);

    D = I;
    E = I;
    F = I;

    for (i = 1; i <= N; i++) {
        
        scanf("%s", &T);
        
        if (strcmp(T, c) == 0) {
            
            scanf("%s %lf", &P, &X);

            if (strcmp(P, d) == 0) {
                D -= X;
            }
            else if (strcmp(P, e) == 0) {
                E -= X;
            }
            else if (strcmp(P, f) == 0) {
                F -= X;
            }
        }

        if (strcmp(T, v) == 0) {

            scanf("%s %lf", &P, &X);

            if (strcmp(P, d) == 0) {
                D += X;
            }
            else if (strcmp(P, e) == 0) {
                E += X;
            }
            else if (strcmp(P, f) == 0) {
                F += X;
            }      
        }

        if (strcmp(T, a) == 0) {
           
            scanf("%s %s %lf", &P, &A, &X);

            if (strcmp(P, d) == 0) {
                if (strcmp(A, e) == 0) {
                    D += X;
                    E -= X;
                }
                else if (strcmp(A, f) == 0) {
                    D += X;
                    F -= X;
                }
            }
            else if (strcmp(P, e) == 0) {
                if (strcmp(A, d) == 0) {
                    E += X;
                    D -= X;
                }
                else if (strcmp(A, f) == 0) {
                    E += X;
                    F -= X;
                }
            }
            else if (strcmp(P, f) == 0) {
                if (strcmp(A, d) == 0) {
                    F += X;
                    D -= X;
                }
                else if (strcmp(A, e) == 0) {
                    F += X;
                    E -= X;
                }
            }
        }
    }
    
    printf("%0.0lf %0.0lf %0.0lf\n", D, E, F);

    return 0;
}