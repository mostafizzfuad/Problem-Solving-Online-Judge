// created by mostafizzfuad
using System;
class URI
{
    static void Main(string[] args)
    {

        double r = Convert.ToDouble(Console.ReadLine());

        double volume = (4 / 3.0) * 3.14159 * r * r * r;

        Console.WriteLine("VOLUME = " + volume.ToString("0.000"));

    }
}