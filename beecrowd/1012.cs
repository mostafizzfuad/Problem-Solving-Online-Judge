// created by mostafizzfuad
using System;
class URI {
    static void Main(string[] args) {

        double a = Convert.ToDouble(Console.ReadLine());
        double b = Convert.ToDouble(Console.ReadLine());
        double c = Convert.ToDouble(Console.ReadLine());

        double triangle = 0.5 * a * c;
        double circle = 3.14159 * c * c;
        double trapezium = ((a + b) / 2) * c;
        double square = b * b;
        double rectangle = a * b;

        Console.WriteLine("TRIANGULO: " + triangle.ToString("0.000"));
        Console.WriteLine("CIRCULO: " + circle.ToString("0.000"));
        Console.WriteLine("TRAPEZIO: " + trapezium.ToString("0.000"));
        Console.WriteLine("QUADRADO: " + square.ToString("0.000"));
        Console.WriteLine("RETANGULO: " + rectangle.ToString("0.000"));

    }
}

// runtime error