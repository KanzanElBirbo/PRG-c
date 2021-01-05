/*Chcete cestovat letadlem.
U terminálu se vás zeptají, kolik máte malých a velkých zavazadel.
Malé zavazadlo berou s hmotností 5kg, velké zavazadlo s hmotností 10kg.
Také se vás zeptají na mazlíèka, ten je povolen pouze 1.*/

#include <stdio.h>
#include <stdlib.h>
int main (void) {
int male_zavaz=5;//Malé zavazadlo
int velke_zavaz=10;//Velké zavazadlo
int maz;//Mazlíèek
int x1;//Poèet, kterým se násobí malá zavazadla
int x2;//Poèet, kterým se násobí velká zavazadla
int sum3;//Výsledek souètu vah obou zavazadel

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
