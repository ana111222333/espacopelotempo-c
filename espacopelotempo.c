#include <stdio.h>

float calcularEspaco(float velocidade, float tempo, float aceleracao);

int main() {

    float velocidade;
    float tempo;
    float aceleracao = 0;
    char resposta;

    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);

    printf("Digite o tempo: ");
    scanf("%f", &tempo);

    printf("Ha aceleracao? (s/n): ");
    scanf(" %c", &resposta);

    if(resposta == 's' || resposta == 'S') {

        printf("Digite a aceleracao: ");
        scanf("%f", &aceleracao);
    }

    float espaco = calcularEspaco(velocidade, tempo, aceleracao);

    printf("Espaco percorrido = %.2f\n", espaco);

    printf("Criado por Ana");

    return 0;
}
