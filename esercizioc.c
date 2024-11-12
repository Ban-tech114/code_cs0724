#include <stdio.h>

int main(){
    int num1, num2, risultato;

    //Richiesta di input per l'utente
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);
     
 //calcolo della moltiplicazione
 risultato = num1 * num2;

 //output per l'utente
 printf("Il risultato della moltiplicazione è: %d\n", risultato);

 return 0;


}