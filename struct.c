#include <stdio.h>

//https://www.inf.pucrs.br/~pinho/LaproI/Structs/Structs.htm

typedef struct // cria uma struct para armazenar os dados de uma pessoa
{
    float Peso;
    int Idade;
    float Altura;

}Pessoa;

int main(){

    Pessoa Joao, P1, P2;
    Pessoa Povo[10];

    Joao.Idade = 15;
    Joao.Peso = 60.5;
    Joao.Altura = 1.68;

    printf("Joao  \nIdade: %d\n", Joao.Idade);

    return 0;

}

