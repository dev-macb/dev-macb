class Program {
    static void Main(String[] args) {
        double salarioMinimo = double.Parse(Console.ReadLine());
        double consumoKW = double.Parse(Console.ReadLine());
        
        double custoPorKW = Math.Round(salarioMinimo * 0.7 / 100, 2);
        double custoConsumo = Math.Round(custoPorKW * consumoKW / 100, 2);
        double custoDescontado = Math.Round(custoConsumo - (custoConsumo * 0.1), 2);

        Console.WriteLine($"Custo por kW: R$ {custoPorKW}");
        Console.WriteLine($"Custo do consumo: R$ {custoConsumo}");
        Console.WriteLine($"Custo com desconto: R$ {custoDescontado}");

        return;
    }
}
