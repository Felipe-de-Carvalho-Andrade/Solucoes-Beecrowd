using System;
using System.Globalization;

class URI {
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());

        for (int i = 0; i < n; i++) {
            string[] line = Console.ReadLine().Split(' ');

            int qt = int.Parse(line[0]);
            int s = int.Parse(line[1]);

            string[] numeros = Console.ReadLine().Split(' ');

            int menorDiferenca = int.MaxValue;
            int vencedor = 0;

            for (int j = 0; j < qt; j++){
                int palpite = int.Parse(numeros[j]);

                int diferenca = Math.Abs(palpite - s);

                if (diferenca < menorDiferenca) {
                    menorDiferenca = diferenca;
                    vencedor = j + 1;
                }
            }

            Console.WriteLine(vencedor);
        }
    }
}