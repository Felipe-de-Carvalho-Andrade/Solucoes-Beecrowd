using System;
using System.Globalization;

class Program {
    static void Main(string[] args) { 
        int caso = 1;
        string line;

        while ((line = Console.ReadLine()) != null) {
            int N = int.Parse(line);

            double[,] teclas = new double[10, 2];

            string[] valores = Console.ReadLine().Split(' ');

            for (int i = 0; i < 10; i++) {
                teclas[i, 0] = double.Parse(valores[i]); 
                teclas[i, 1] = i;                        
            }

            for (int i = 0; i < 9; i++) {
                int usada = i;

                for (int j = i + 1; j < 10; j++) 
                    if (teclas[j, 0] > teclas[usada, 0] || (teclas[j, 0] == teclas[usada, 0] && teclas[j, 1] < teclas[usada, 1]))
                        usada = j;

                double tempVal = teclas[i, 0];
                double tempDig = teclas[i, 1];

                teclas[i, 0] = teclas[usada, 0];
                teclas[i, 1] = teclas[usada, 1];

                teclas[usada, 0] = tempVal;
                teclas[usada, 1] = tempDig;
            }

            Console.Write($"Caso {caso}: ");
            for (int i = 0; i < N; i++)
                Console.Write((int)teclas[i, 1]);
            Console.WriteLine();

            caso++;
        }
    }
}