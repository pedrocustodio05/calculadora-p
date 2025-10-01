#include <stdio.h>
#include <math.h>  // Para funções matemáticas como pow, sqrt, sin, cos, etc.

int main() {
    int opcao;
    char continuar;
    double num1, num2, resultado;

    do {
        printf("\n--- CALCULADORA CIENTIFICA ---\n");
        printf("1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n");
        printf("5. Potenciacao (x^y)\n6. Raiz Quadrada\n7. Seno\n8. Cosseno\n");
        printf("9. Tangente\n10. Logaritmo base 10\n11. Logaritmo Natural\n");
        printf("12. Exponencial (e^x)\n13. Sair\n");
        printf("Escolha uma operacao: ");
        scanf("%d", &opcao);

        if (opcao == 13) {
            break; // Sai do loop se usuário escolher sair
        }

        switch (opcao) {
            case 1: // Adição
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 + num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 2: // Subtração
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 - num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 3: // Multiplicação
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 * num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 4: // Divisão
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 == 0) {
                    printf("Erro: Divisao por zero nao permitida.\n");
                } else {
                    resultado = num1 / num2;
                    printf("Resultado: %.2lf\n", resultado);
                }
                break;
            case 5: // Potenciação
                printf("Digite a base e o expoente: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = pow(num1, num2);
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 6: // Raiz Quadrada
                printf("Digite um numero: ");
                scanf("%lf", &num1);
                if (num1 < 0) {
                    printf("Erro: Raiz quadrada de numero negativo nao permitida.\n");
                } else {
                    resultado = sqrt(num1);
                    printf("Resultado: %.2lf\n", resultado);
                }
                break;
            case 7: // Seno
                printf("Digite o angulo em graus: ");
                scanf("%lf", &num1);
                resultado = sin(num1 * M_PI / 180.0); // converte graus para radianos
                printf("Resultado: %.4lf\n", resultado);
                break;
            case 8: // Cosseno
                printf("Digite o angulo em graus: ");
                scanf("%lf", &num1);
                resultado = cos(num1 * M_PI / 180.0);
                printf("Resultado: %.4lf\n", resultado);
                break;
            case 9: // Tangente
                printf("Digite o angulo em graus: ");
                scanf("%lf", &num1);
                resultado = tan(num1 * M_PI / 180.0);
                printf("Resultado: %.4lf\n", resultado);
                break;
            case 10: // Logaritmo base 10
                printf("Digite um numero positivo: ");
                scanf("%lf", &num1);
                if (num1 <= 0) {
                    printf("Erro: Logaritmo de numero nao positivo nao permitido.\n");
                } else {
                    resultado = log10(num1);
                    printf("Resultado: %.4lf\n", resultado);
                }
                break;
            case 11: // Logaritmo natural
                printf("Digite um numero positivo: ");
                scanf("%lf", &num1);
                if (num1 <= 0) {
                    printf("Erro: Logaritmo de numero nao positivo nao permitido.\n");
                } else {
                    resultado = log(num1);
                    printf("Resultado: %.4lf\n", resultado);
                }
                break;
            case 12: // Exponencial (e^x)
                printf("Digite o expoente x para e^x: ");
                scanf("%lf", &num1);
                resultado = exp(num1);
                printf("Resultado: %.4lf\n", resultado);
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }

        printf("\nDeseja realizar outra operacao? (s/n): ");
        scanf(" %c", &continuar); // espaço antes do %c para consumir o newline deixado pelo scanf anterior
    } while (continuar == 's' || continuar == 'S');

    printf("Calculadora encerrada. Ate logo!\n");
    return 0;
}
