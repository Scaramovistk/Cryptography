//Criando chave privada em meio publico utilizando funçao modular
#include <stdio.h>
#include <math.h>

int main (void)
{
    double expAlice, respAlice, respBob, base, modulo, chavePrivada;

    printf("Digite a base da funcao modular\n");
    scanf("%lf", &base);

    printf("Qual o modulo da funcao?\n");
    scanf("%lf", &modulo);

    printf("Digite seu exponte\n");
    scanf("%lf", &expAlice);

    respAlice = pow(base,expAlice); // Calcula a Potencia
    respAlice = remainder(modulo,respAlice); // Calcula o modulo

    printf("\nAlice a resposta da sua operacao e:%f\n", respAlice);
    printf("Envie para o Bob\n");

    printf("\nQual a resposta do Bob?\n");
    scanf("%lf", &respBob);

    chavePrivada = pow(respBob,respAlice);
    printf("\nAlice sua chave privada e ANTES:%f\n", chavePrivada);
    chavePrivada = remainder(chavePrivada,modulo);

    printf("\nAlice sua chave privada e:%f\n", chavePrivada);

    return 0;
}
