using System; 
using System.Linq;

class URI {

    static void Main(string[] args) { 
       string input;

            while ((input = Console.ReadLine()) != null) {
                bool italicOpen = false;
                bool boldOpen = false;

                foreach (char c in input) {
                    if (c == '_') {
                        if (!italicOpen) 
                            Console.Write("<i>");
                        else 
                            Console.Write("</i>");

                        italicOpen = !italicOpen;
                    } else if (c == '*') {
                        if (!boldOpen) 
                            Console.Write("<b>");
                        else 
                            Console.Write("</b>");
                        
                        boldOpen = !boldOpen;
                    } else {
                        Console.Write(c);
                    }
                }

                Console.WriteLine();
            }
    }
}