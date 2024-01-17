// created by mostafizzfuad
using System;
class URI
{
    static void Main(string[] args)
    {

        double a = Convert.ToDouble(Console.ReadLine());
        double b = Convert.ToDouble(Console.ReadLine());
        double c = Convert.ToDouble(Console.ReadLine());

        double sumOfWeight = 2 + 3 + 5;
        double avg = ((a * 2) + (b * 3) + (c * 5)) / sumOfWeight;

        Console.WriteLine("MEDIA = " + avg.ToString("0.0"));

    }
}