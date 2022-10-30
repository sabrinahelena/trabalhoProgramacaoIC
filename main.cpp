#include <iostream>
using namespace std;
float CalcularSalario(float horas, int c) {

  if (c == 0) {
    return horas * 12.20;
  } else if (c == 1) {
    return horas * 15.20;
  } else if (c == 2) {
    return horas * 18.20;
  } else if (c == 3) {
    return horas * 21.20;
  }
  return 0;
}

int main() {
  int x = 1, cargo;
  char nome[20];
  float horasTrabalhadas, salario;

  while (x == 1) {
    cout << "Olá! Seja bem vindo a Solution Interprise! Vamos calcular o seu "
            "salário deste mês! \nPara isso, digite o seu cargo, sendo: \n0 - "
            "Desenvolvedor Junior \n1 - Desenvolvedor Pleno \n2 - "
            "Desenvolvedor Senior \n3 - Techlead \nOPCAO: ";
    cin >> cargo;
    cout << "Digite o seu nome: ";
    cin >> nome;
    cout << "Digite as horas trabalhadas: ";
    cin >> horasTrabalhadas;
    salario = CalcularSalario(horasTrabalhadas, cargo);

    if (cargo == 0) {
      cout << nome << " o seu salario deste mes com o cargo dev jr e': R$ "
           << salario;
    } else if (cargo == 1) {
      cout << nome << " o seu salario deste mes com o cargo dev pl e': R$ "
           << salario;
    } else if (cargo == 2) {
      cout << nome << " o seu salario deste mes com o cargo dev senior e': R$ "
           << salario;
    } else if (cargo == 3) {
      cout << nome << " o seu salario deste mes com o cargo techlead e': R$ "
           << salario;
    }

    cout << "\nDeseja continuar para calcular o salario de outro funcionario, ou "
            "simular o seu "
         << nome
         << " em outro cargo? Se sim, digite 1. Caso nao queira, digite 2. "
            "\nOPCAO:";
    cin >> x;
  }
}
