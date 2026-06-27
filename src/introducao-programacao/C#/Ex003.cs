class Program {
    static void Main(String[] args) {
        const double pi = 3.14159;

        double raio = double.Parse(Console.ReadLine());
        double altura = double.Parse(Console.ReadLine());
        
        double area = (2 * pi * raio * raio) + (2 * pi * raio * altura);
        double custo = Math.Round(area / 100, 2);

        Console.WriteLine($"O VALOR DO CUSTO E = {custo}");

        return;
    }
}
