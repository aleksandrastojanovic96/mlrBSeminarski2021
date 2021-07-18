using System;

namespace ConsoleApp21
{
    class Program
    {
        static void Main(string[] args)
        {
            int broj_gostiju;

            broj_gostiju = int.Parse(Console.ReadLine());

            Console.WriteLine(240 / broj_gostiju);

            Console.ReadKey();

        }
    }