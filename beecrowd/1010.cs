// created by mostafizzfuad
using System;
class URI {
    static void Main(string[] args) {

        int codeOfProduct1 = Convert.ToInt32(Console.ReadLine());
        int unitOfProduct1 = Convert.ToInt32(Console.ReadLine());
        double perUnitPrice1 = Convert.ToDouble(Console.ReadLine());

        int codeOfProduct2 = Convert.ToInt32(Console.ReadLine());
        int unitOfProduct2 = Convert.ToInt32(Console.ReadLine());
        double perUnitPrice2 = Convert.ToDouble(Console.ReadLine());

        double total = unitOfProduct1 * perUnitPrice1 + unitOfProduct2 * perUnitPrice2;

        Console.WriteLine("VALOR A PAGAR: R$ " + total.ToString("0.00"));

    }
}


// runtime error