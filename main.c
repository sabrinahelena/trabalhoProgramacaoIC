#include <stdio.h>

float CalcularSalario(float horas, int cargo){

  if(cargo == 0){
    return horas * 12.20;
  }
  else if(cargo == 1){
    return horas * 15.20;
  }
  else if(cargo == 2){
    return horas * 18.20;
  }
  else if(cargo == 3){
    return horas * 21.20;
  }
  return 0;
}

int main(void) {

  int x = 1, cargo;
  char nome[20];
  float horasTrabalhadas, salario;

  while(x == 1){
    printf("Olá! Seja bem vindo a Solution Interprise! Vamos calcular o seu salário deste mês! \nPara isso, digite o seu cargo, sendo: \n0 - Desenvolvedor Junior \n1 - Desenvolvedor Pleno \n2 - Desenvolvedor Senior \n3 - Techlead \nOPCAO: ");
    scanf("%d", &cargo);
    printf("\nDigite o seu nome: ");
    scanf("%s", &nome);
    printf("\nDigite as horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);
    salario = CalcularSalario(horasTrabalhadas, cargo);
    if(cargo == 0){
    printf("\n%s, o seu salario deste mes com o cargo dev jr e': %.2f", nome, salario);

    }
    else if(cargo == 1){
    printf("\n%s, o seu salario deste mes com o cargo dev pl e': %.2f", nome, salario);

    }
    else if(cargo == 2){
    printf("\n%s, o seu salario deste mes com o cargo dev senior e': %.2f", nome, salario);
    }
    else if(cargo == 3){
    printf("\n%s, o seu salario deste mes com o cargo techlead e': %.2f", nome, salario);

    }


    printf("\nDeseja continuar para calcular o salario de outro funcionario, ou simular o seu %s em outro cargo? Se sim, digite 1. Caso nao queira, digite 2. ", nome);
    scanf("%d", &x);
  }

  return 0;
}