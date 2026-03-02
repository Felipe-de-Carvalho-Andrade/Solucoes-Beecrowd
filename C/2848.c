#include <stdio.h>

int main() {
    int N, Q, l, R, K, i, S, G, D;
    int ordem;
    char vencedor;

    scanf("%d %d", &N, &Q);

    int vetor[N];
    int org[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);
        org[i] = vetor[i];
    }

    while (Q--)
    {
        scanf("%d %d %d %d %d", &l, &R, &K, &G, &D);

        int cap = 0;

        for (i = l; i < R; i++)
        {
            ordem = vetor[i];

            for (S = i - 1; S >= (l - 1) && vetor[S] > ordem; S--)
                vetor[S + 1] = vetor[S];

            vetor[S + 1] = ordem;
        }

        int idkm = (l - 1) + K - 1;
        int kmenor = vetor[idkm];

        for (i = l - 1; i < R; i++)
        {
            if (vetor[i] == kmenor)
                cap++;
        }

        if (G > cap)
            G = G - cap;
        else if (cap > G)
            G = cap - G;
        else
            G = 0;

        if (D > cap)
            D = D - cap;
        else if (cap > D)
            D = cap - D;
        else
            D = 0;

        if (D < G)
            vencedor = 'D';
        else if (D > G)
            vencedor = 'G';
        else
            vencedor = 'E';

        for (i = 0; i < N; i++)
            vetor[i] = org[i];


        printf("%d %d %c\n", kmenor, cap, vencedor);

        cap = 0;
    }

    return 0;
}