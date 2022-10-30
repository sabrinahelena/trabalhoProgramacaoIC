using System;

class Program {
    public static void Main (string[] args)
    {

        int x = 1;
        while (x == 1)
        {

            Console.Write(
                $"Olá! Seja bem vindo a Solution Interprise! Vamos calcular o seu salário deste mês! {Environment.NewLine} " +
                $"Para isso, digite o seu cargo, sendo: {Environment.NewLine}0 - Desenvolvedor Junior {Environment.NewLine}1 - Desenvolvedor Pleno {Environment.NewLine}2 - Desenvoledor Senior {Environment.NewLine}3 - TechLead {Environment.NewLine}Sua resposta: ");
            Enum.TryParse(Console.ReadLine(), out Cargo level);

            Console.WriteLine($"Digite o seu nome: ");
            string nome = Console.ReadLine();
            Console.WriteLine($"Digite as suas horas trabalhadas: ");
            double horas = Double.Parse(Console.ReadLine());
            Funcionario f = new Funcionario(nome, horas, level);
            Console.WriteLine($"{f.Nome}, O seu salario deste mês com o cargo {level} é: R$ {f.Salario}");

            Console.WriteLine(
                $"Deseja continuar para calcular o salario de outro funcionario, ou simular o seu {f.Nome} em outro cargo? Digite 1. Caso não queira, digite 2. {Environment.NewLine}Resposta: ");
            x = Int32.Parse(Console.ReadLine());
        }

    }
    public class Funcionario : Empresa
    {
        public Funcionario(string nome, double horasTrabalhadas, Cargo cargo)
        {
            Nome = nome;
            Salario = CalcularSalario(cargo, horasTrabalhadas);
            HorasTrabalhadas = horasTrabalhadas;
            Cargo = cargo;
        }

        public Funcionario()
        {
            
        }

        public string Nome {get; set;}
        public Cargo Cargo {get; set;}
        public decimal Salario {get; set;}
        public double HorasTrabalhadas {get;set;}
  
    }

    public enum Cargo{
        DevJr,
        DevPl,
        DevSenior,
        TechLead
    }

    public class Empresa{


        public decimal CalcularSalario(Cargo c, double horas){ 
            if(c == Cargo.DevJr){
                return Convert.ToDecimal(horas * 12.20);
            }
            else if (c == Cargo.DevPl)
            {
                return Convert.ToDecimal(horas * 15.20);
            }
            else if (c == Cargo.DevSenior)
            {
                return Convert.ToDecimal(horas * 18.20);
            }
            else if (c == Cargo.TechLead)
            {
                return Convert.ToDecimal(horas * 21.20);
            }

            return default;
        }
    }
}

