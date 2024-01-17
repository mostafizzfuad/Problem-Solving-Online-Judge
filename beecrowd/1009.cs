// created by mostafizzfuad
using System;
class URI
{
    static void Main(string[] args)
    {

        string sellerName = Console.ReadLine();
        double fixedSalary = Convert.ToDouble(Console.ReadLine());
        double amountOfTotalSell = Convert.ToDouble(Console.ReadLine());

        double bonusSalary = amountOfTotalSell * 0.15;
        double salary = fixedSalary + bonusSalary;

        Console.WriteLine("SALARY = U$ " + salary.ToString("0.00"));

    }
}