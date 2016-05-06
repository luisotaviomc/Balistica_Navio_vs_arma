#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

clock_t tempo_inicial;
clock_t tempo_final;

int iniciaTemporizador(void)
{
    tempo_inicial = clock();
    tempo_final = tempo_inicial;
    return (int)tempo_inicial;
}
int contaTemporizador(void)
{
    int Contador;
    tempo_final = clock();
    Contador = ((int)tempo_final) - ((int)tempo_inicial);
    return Contador;
}

int main(){
    float time;
    //////////////////////////////////////ESCUDO
    float TempoEscudo;
    int sentidoEscudo = 1;
    int i;
    //////////////////////////////////////

    printf("Let's play the game!!!");
    float OscilacaoCompleta;
    printf("\nDigite o tempo de oscilação completa do escudo: ");
    scanf("%f", &OscilacaoCompleta);

    float VelocidadeInicial;
    printf("\nDigite a velocidade inicial: ");
    scanf("%f", &VelocidadeInicial);

    float AnguloInclinacao;
    printf("\nDigite o angulo de inclinacao: ");
    scanf("%f", &AnguloInclinacao);

    iniciaTemporizador();
    printf("\nAgora digite enter para atirar: ");
    getch();
    time = contaTemporizador();



    float w;
    float hFinal;
    w = 2*M_PI*0.05;
    hFinal = 1.5 + (1.5 * cos(w));

    float yParabola;
    float vCos;
    vCos= 1000/VelocidadeInicial*cos(AnguloInclinacao);
    yParabola = (VelocidadeInicial*sin(AnguloInclinacao)*vCos) - ((0.5)*9.8*(pow(vCos, 2)));

    if(yParabola == 51.5){
        printf("ACERTOU! MLK");
        /////////FUNCOES DE ACERTO
    } else {
        printf("ERROU FDP HEHE");
        /////////FUNCOES DE ERRO
    }

    float TempoMeioCiclo;
    TempoMeioCiclo = OscilacaoCompleta/2;
    for(i = TempoEscudo; i >= TempoMeioCiclo; i -= TempoMeioCiclo){
        sentidoEscudo++;
    }
    if((TempoMeioCiclo/4)*3 >= i && (TempoMeioCiclo/4)*2 <= i ){
        printf("Defendeu!");
        //ATIVIDADES AO DEFENDER
    } else {
        printf("Não Defendeu!");
        //ATIVIDADES AO NAO DEFENDER
    }

}
