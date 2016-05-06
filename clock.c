#include<time.h>

clock_t init_time; //Valor inicial
clock_t last_time; //Valor atual
int wait_time = 250; //Valor de espera

//Inicia a contagem
int InitClock(void)
{
init_time = clock();
last_time = init_time;
return (int)init_time;
}

//Atualiza o time
bool CheckClock(void)
{
last_time = clock();
if ( ((int)last_time)-((int)init_time) >= wait_time )
{ return true;//O relogio atingiu o tempo de espera; }
return false; // o tempo de espera ainda não foi atingido;
}

