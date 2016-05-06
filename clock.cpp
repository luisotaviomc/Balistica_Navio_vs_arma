#include<bits/stdc++.h>

using namespace std;

clock_t init_time; //Valor inicial
clock_t last_time; //Valor atual

//Inicia a contagem
int InitClock(void)
{
    init_time = clock();
    last_time = init_time;
    return (int)init_time;
}

//Atualiza o time
int CheckClock(void)
{
    int wait_time;
    last_time = clock();
    wait_time = ((int)last_time)-((int)init_time);
    return wait_time;
}

int main(){
    InitClock();
    int x;
    float time;
    scanf(" %d", &x);
    time = (float) CheckClock()/1000.0;
    printf("VC DEMOROU %.3f DE TEMPO PRA LER ESSE DADO", time);
}

