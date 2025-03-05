#include <stdio.h>

// Funções de conversão de temperatura
double celsiusParaFahrenheit(double celsius) {
  return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheitParaCelsius(double fahrenheit) {
  return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Funções de conversão de peso
double quilogramaParaLibra(double quilograma) {
  return quilograma * 2.20462;
}

double libraParaQuilograma(double libra) {
  return libra / 2.20462;
}

// Funções de conversão de distância
double metroParaPes(double metro) {
  return metro * 3.28084;
}

double pesParaMetro(double pes) {
  return pes / 3.28084;
}

int main() {
  int escolha, subEscolha;
  double valor, resultado;

  printf("Conversor de Unidades\n");
  printf("1. Temperatura\n");
  printf("2. Peso\n");
  printf("3. Distância\n");
  printf("Escolha a categoria: ");
  scanf("%d", &escolha);

  switch (escolha) {
  case 1:
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("Escolha a conversão: ");
    scanf("%d", &subEscolha);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    if (subEscolha == 1) {
      resultado = celsiusParaFahrenheit(valor);
      printf("%.2lf Celsius = %.2lf Fahrenheit\n", valor, resultado);
    } else if (subEscolha == 2) {
      resultado = fahrenheitParaCelsius(valor);
      printf("%.2lf Fahrenheit = %.2lf Celsius\n", valor, resultado);
    } else {
      printf("Escolha inválida.\n");
    }
    break;

  case 2:
    printf("1. Quilograma para Libra\n");
    printf("2. Libra para Quilograma\n");
    printf("Escolha a conversão: ");
    scanf("%d", &subEscolha);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    if (subEscolha == 1) {
      resultado = quilogramaParaLibra(valor);
      printf("%.2lf Quilograma = %.2lf Libra\n", valor, resultado);
    } else if (subEscolha == 2) {
      resultado = libraParaQuilograma(valor);
      printf("%.2lf Libra = %.2lf Quilograma\n", valor, resultado);
    } else {
      printf("Escolha inválida.\n");
    }
    break;

  case 3:
    printf("1. Metro para Pés\n");
    printf("2. Pés para Metro\n");
    printf("Escolha a conversão: ");
    scanf("%d", &subEscolha);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    if (subEscolha == 1) {
      resultado = metroParaPes(valor);
      printf("%.2lf Metro = %.2lf Pés\n", valor, resultado);
    } else if (subEscolha == 2) {
      resultado = pesParaMetro(valor);
      printf("%.2lf Pés = %.2lf Metro\n", valor, resultado);
    } else {
      printf("Escolha inválida.\n");
    }
    break;

  default:
    printf("Escolha inválida.\n");
  }

  return 0;
}
