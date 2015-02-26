#include <stdio.h>
#include <stdlib.h>

#define N 5
int calcoloMaggiorenni(int vettoreEta[], int dimensioneVettore);

int main(int argc, char** argv) {
    int maggiorenni;
    int vettoreEta[N];
    int i;
    
    for(i=0;i<N;i++) {
        printf("Inserisci l'eta' della %d persona: ", i+1);
        scanf("%d", &(vettoreEta[i]));
    }
    
    maggiorenni = calcoloMaggiorenni(vettoreEta, N);
    
    printf("\nI maggiorenni sono: %d", maggiorenni);
    
    return (EXIT_SUCCESS);
}

int calcoloMaggiorenni(int vettoreEta[], int dimensioneVettore) {
    int maggiorenni = 0;
    int maggioreEta = 18;
    int i;
    
    for(i=0;i<dimensioneVettore;i++) {
        if(vettoreEta[i]>=maggioreEta) {
            maggiorenni += 1;
        }
    }
    
    return maggiorenni;
}

