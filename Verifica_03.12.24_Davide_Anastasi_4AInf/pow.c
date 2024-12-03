int potenza(int base,int esponente){
    #ifdef DEBUG
        TRACE();
    #endif
    int i,ris=1;
    for(i=0;i<esponente;i++){
        ris*=base;
    }
    return ris;
}