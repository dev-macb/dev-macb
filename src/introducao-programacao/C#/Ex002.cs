class Program {
    static void Main(String[] args) {
        double fahrenheit = double.Parse(Console.ReadLine());
        double polegadas = double.Parse(Console.ReadLine());
        
        double celcius = Math.Round(5 * (fahrenheit - 32) / 9, 2);
        double quantidadeChuva = Math.Round(polegadas * 25.4, 2);

        Console.WriteLine($"O VALOR EM CELSIUS = {celcius}");
        Console.WriteLine($"A QUANTIDADE DE CHUVA E = {quantidadeChuva}");

        return;
    }
}
