// created by mostafizzfuad
using System;
class URI
{
    static void Main(string[] args)
    {

        double a = Convert.ToDouble(Console.ReadLine());
        double b = Convert.ToDouble(Console.ReadLine());

        double sumOfWeight = 3.5 + 7.5;
        double avg = ((a * 3.5) + (b * 7.5)) / sumOfWeight;

        Console.WriteLine("MEDIA = " + avg.ToString("0.00000"));

    }
}