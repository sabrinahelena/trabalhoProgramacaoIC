import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner leitor = new Scanner(System.in);
        Scanner leitor2 = new Scanner(System.in);
        Scanner leitor3 = new Scanner(System.in); //criei 3 scanners pois estava dando erro usar o mesmo scanner para todos.

        int x = 1;
        Cargo c = null; //apenas para inicializar
        String nome;
        float horas;

        while (x == 1)
        {

            System.out.println("Olá! Seja bem vindo a Solution Interprise! Vamos calcular o seu salário deste mês! \nPara isso, digite o seu cargo, sendo: \n0 - Desenvolvedor Junior \n1 - Desenvolvedor Pleno \n2 - Desenvoledor Senior \n3 - TechLead \nSua resposta: \n");
            int cargo = leitor.nextInt();
            if(cargo == 0){
                c = Cargo.DevJr;
            }
            else if(cargo == 1){
                c = Cargo.DevPl;
            }
            else if(cargo == 2){
                c = Cargo.DevSenior;
            }
            else if(cargo == 3){
                c = Cargo.Techlead;
            } //Não encontrei função como o TryParse do c# para java, então precisei tratar assim.

            System.out.println("Digite o seu nome: ");
            nome = leitor2.nextLine();

            System.out.println("Digite as suas horas trabalhadas: ");
            horas = leitor3.nextFloat();
            Funcionario f = new Funcionario(nome,c,horas);
            System.out.println(nome + ", O seu salario deste mês com o cargo " + c.toString() +" e': " + "R$ " + f.getSalario());

            System.out.println((
                    "Deseja continuar para calcular o salario de outro funcionario, ou simular o seu " + f.getNome() + " em outro cargo? Digite 1. Caso não queira, digite 2. \n Resposta: "));
            x = leitor.nextInt();
        }
    }
    public static class Funcionario
    {

        Empresa empresa = new Empresa();
        public Funcionario(String nome, Cargo cargo, float horasTrabalhadas) {
            this.nome = nome;
            this.cargo = cargo;
            Salario = empresa.CalcularSalario(cargo, horasTrabalhadas);
            HorasTrabalhadas = horasTrabalhadas;
        }

        protected String nome;

        protected Cargo cargo;

        protected float Salario;
        protected float HorasTrabalhadas;
        //Fiz o get e set apenas do que estava utilizando por fora.

        public String getNome() {
            return nome;
        }

        public float getSalario() {
            return Salario;
        }

    }
    public enum Cargo{
        DevJr,
        DevPl,
        DevSenior,
        Techlead
    }

    public static class Empresa{
        public float CalcularSalario(Cargo c, float horas){
            if(c == Cargo.DevJr){
                return horas * 12.20f;
            }
            else if (c == Cargo.DevPl)
            {
                return horas * 15.20f;
            }
            else if (c == Cargo.DevSenior)
            {
                return horas * 18.20f;
            }
            else if (c == Cargo.Techlead)
            {
                return horas * 21.20f;
            }
            return 0f;
        }
    }
}