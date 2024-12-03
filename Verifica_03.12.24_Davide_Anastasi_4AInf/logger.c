#define BUF 10
void logger(int iterazioni){
    #ifdef DEBUG
        TRACE();
    #endif
    int i;
    extern int operando1_[BUF];
    extern int operando2_[BUF];
    extern float risultato_[BUF];
    extern char operazione_[BUF];
    for(i=0;i<iterazioni;i++){
        printf("%d %c %d = %.2f\n",operando1_[i],operazione_[i],operando2_[i],risultato_[i]);
    }
}