// created by mostafizzfuad
using System;
class URI
{
    static void Main(string[] args)
    {

        int number = Convert.ToInt32(Console.ReadLine());
        int workingHours = Convert.ToInt32(Console.ReadLine());
        double amountPerHour = Convert.ToDouble(Console.ReadLine());

        double salary = workingHours * amountPerHour;

        Console.WriteLine("NUMBER = " + number);
        Console.WriteLine("SALARY = U$ " + salary.ToString("0.00"));

    }
}