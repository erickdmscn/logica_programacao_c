#include <stdio.h>

int main() {
    int C, N;
    float salario, salario_excedente, hora_normal = 20.0, hora_excedente = 40.0;
    
    printf("Digite o c�digo do oper�rio: ");
    scanf("%d", &C);

    printf("Digite o n�mero de horas trabalhadas: ");
    scanf("%d", &N);

    if (N <= 50) {
        salario = N * hora_normal;
        salario_excedente = 0;
    } else {
        salario = 50 * hora_normal;
        salario_excedente = (N - 50) * hora_excedente;
    }

    printf("Sal�rio total: R$ %.2f\n", salario + salario_excedente);
    printf("Sal�rio excedente: R$ %.2f\n", salario_excedente);

    return 0;
}
