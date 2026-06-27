class Program {
    static void Main(String[] args) {
        int a = int.Parse(Console.ReadLine());
        int b = int.Parse(Console.ReadLine());
        int c = int.Parse(Console.ReadLine());

        double discriminante = (b * b) - (4 * a * c);

        Console.WriteLine($"O VALOR DO DELTA E = {discriminante}");

        return;
    }
}
