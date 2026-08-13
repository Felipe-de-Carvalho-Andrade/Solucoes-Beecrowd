using System;
using System.Globalization;

class Program {
    static void Main(string[] args) { 
        string line;
        while ((line = Console.ReadLine()) != null) {

            if (line == "0+0=0") {
                Console.WriteLine("True");
                break;
            }

            string[] partes = line.Split('+', '=');
            
            int a = int.Parse(Reverter(partes[0]));
            int b = int.Parse(Reverter(partes[1]));
            int c = int.Parse(Reverter(partes[2]));

            if (a + b == c)
                Console.WriteLine("True");
            else
                Console.WriteLine("False");
        }
        
    }

    static string Reverter(string s) {
        char[] arr = s.ToCharArray();
        Array.Reverse(arr);

        return new string(arr);
    }
}