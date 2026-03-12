using System; 
using System.Linq;

class URI {

    static void Main(string[] args) { 
        int N = int.Parse(Console.ReadLine());

        for (int i = 0; i < N; i++) {
            string[] strings = Console.ReadLine().Split(' ');

            string a = strings[0];
            string b = strings[1];

            string finalText = "";

            int max = Math.Max(a.Length, b.Length);

            for (int j = 0; j < max; j++) {
                if (j < a.Length)
                    finalText += a[j];

                if (j < b.Length)
                    finalText += b[j];
            }

            Console.WriteLine(finalText);
        }

    }

}