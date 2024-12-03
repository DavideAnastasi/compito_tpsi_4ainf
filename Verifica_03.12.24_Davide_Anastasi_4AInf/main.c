#include "TRACE.h"
#include "pow.h"
#include "math.h"
#define BUF 10
#include "logger.h"
int operando1_[BUF] = {0};
int operando2_[BUF] = {0};
float risultato_[BUF] = {0};
char operazione_[BUF] = {'\0'};
int main(){
    #ifdef DEBUG
        TRACE();
    #endif
    char s='a';
    int ris,num1,num2,i=0;
    float ris1;
    while (s!='!'){
        printf("cosa vuoi fare?\n+ Somma\n* Moltiplicazione\n- Differenza\n/ Divisione\n^ Potenza\n# Logger\n! Esci\n");
        scanf(" %c",&s);
        switch(s){
            case '+':
                printf("inserisci il primo numero\n");
                scanf("%d",&num1);
                printf("inserisci il secondo numero\n");
                scanf("%d",&num2);
                operando1_[i]=num1;
                operando2_[i]=num2;
                operazione_[i]=s;
                i++;
                    ris=somma(num1,num2);
                risultato_[i]=ris;
                printf("il risultato e' %d\n",ris);
                break;
            case '*':
                printf("inserisci il primo numero\n");
                scanf("%d",&num1);
                printf("inserisci il secondo numero\n");
                scanf("%d",&num2);
                operando1_[i]=num1;
                operando2_[i]=num2;
                operazione_[i]=s;
            i++;
                ris=moltiplicazione(num1,num2);
                risultato_[i]=ris;
                printf("il risultato e' %d\n",ris);
                break;
            case '-':
                printf("inserisci il primo numero\n");
                scanf("%d",&num1);
                printf("inserisci il secondo numero\n");
                scanf("%d",&num2);
                operando1_[i]=num1;
                operando2_[i]=num2;
                operazione_[i]=s;
                i++;
                ris=differenza(num1,num2);
                risultato_[i]=ris;
                printf("il risultato e' %d\n",ris);
                break;
            case '/':
                printf("inserisci il primo numero\n");
                scanf("%d",&num1);
                printf("inserisci il secondo numero\n");
                scanf("%d",&num2);
                operando1_[i]=num1;
                operando2_[i]=num2;
                operazione_[i]=s;
                i++;
                ris1=divisione(num1,num2);
                risultato_[i]=ris;
                printf("il risultato e' %.2f\n",ris1);
                break;
            case '^':
                printf("inserisci il primo numero\n");
                scanf("%d",&num1);
                printf("inserisci il secondo numero\n");
                scanf("%d",&num2);
                operando1_[i]=num1;
                operando2_[i]=num2;
                operazione_[i]=s;
                i++;
                ris=potenza(num1,num2);
                risultato_[i]=ris;
                printf("il risultato e' %d\n",ris);
                break;
            case '#':
                logger(i);
                break;             
        }
    }
}