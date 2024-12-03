int somma(int a, int b){
    #ifdef DEBUG
        TRACE();
    #endif
    return a+b;
}
int differenza(int a, int b){
    #ifdef DEBUG
        TRACE();
    #endif
    return a-b;
}
int moltiplicazione(int a, int b){
    #ifdef DEBUG
        TRACE();
    #endif
    return a*b;
}
float divisione(int a, int b){
    #ifdef DEBUG
        TRACE();
    #endif
    return a/b;
}