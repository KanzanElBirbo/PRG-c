/*Chcete cestovat letadlem.
U termin�lu se v�s zeptaj�, kolik m�te mal�ch a velk�ch zavazadel.
Mal� zavazadlo berou s hmotnost� 5kg, velk� zavazadlo s hmotnost� 10kg.
Tak� se v�s zeptaj� na mazl��ka, ten je povolen pouze 1.*/

#include <stdio.h>
#include <stdlib.h>
int main (void) {
int male_zavaz=5;//Mal� zavazadlo
int velke_zavaz=10;//Velk� zavazadlo
int maz;//Mazl��ek
int x1;//Po�et, kter�m se n�sob� mal� zavazadla
int x2;//Po�et, kter�m se n�sob� velk� zavazadla
int sum3;//V�sledek sou�tu vah obou zavazadel

printf("Kolik mate malych a velkych zavazadel? \n");
scanf("%d %d", &x1, &x2);
sum3=male_zavaz*x1+velke_zavaz*x2;
if(sum3>20){
    printf("Mate prilis zavazadel. \n"); }
    else{
        printf("Vase zavazadla jsou povolena. \n");}

printf("Kolik mate mazlicku? \n");
scanf("%d", &maz);
if(maz==0) {
    printf("Muzete do letadla. \n"); }
    else if(maz==1) {
        printf("Muzete do letadla. \n"); }
        else {
            printf("Bohuzel do letadla nesmite \n");}
}
