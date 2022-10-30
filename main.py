def CalcularPagamento(qtdHoras, cargo):
  if cargo == 0:
    return qtdHoras * 12.20
  elif cargo == 1:
    return qtdHoras * 15.20
  elif cargo == 2:
    return qtdHoras * 18.20
  elif cargo == 3:
    return qtdHoras * 21.20
  return 0


x = 1

while x == 1:
  print(
    "Olá! Seja bem vindo a Solution Interprise! Vamos calcular o seu salário deste mês! \nPara isso, digite o seu cargo, sendo: \n0 - Desenvolvedor Junior \n1 - Desenvolvedor Pleno \n3 - Desenvolvedor Senior \n4 - Techlead"
  )
  opcao = int(input("OPCAO: "))
  nome = input("Digite o seu nome: ")
  horasTrabalhadas = float(input("Digite as horas trabalhadas:  "))

  salario = CalcularPagamento(horasTrabalhadas, opcao)
  if opcao == 0:
    print("\n{0}, o seu salario deste mes com o cargo dev jr e': {1}".format(
      nome, salario))
  elif opcao == 1:
    print("\n{0}, o seu salario deste mes com o cargo dev pl e': R$ {1}".format(
      nome, salario))
  elif opcao == 2:
    print(
      "\n{0}, o seu salario deste mes com o cargo dev senior e': {1}".format(
        nome, salario))
  elif opcao == 3:
    print("\n{0}, o seu salario deste mes com o cargo techlead e': R$ {1}".format(
      nome, salario))

  print(
  "Deseja continuar para calcular o salario de outro funcionario, ou simular o seu {0} em outro cargo? Se sim, digite 1. Caso nao queira, digite 2. "
  .format(nome))
  opcaoSaida = int(input("OPCAO: "))

  if (opcaoSaida == 2):
    x = 2
