#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Výpočet obvodu a obsahu kružnice a následné porovnání, který z nich je větší */

int main() {
int volba, prumer; // proměnné pro volbu, jestli ano nebo ne, a pro prumer kružnice
float PI = 3.14; // funkce 兀
float obvod_sum2, obsah_sum2; // proměnné pro výpočty obvodu a obsahu kruřnice

printf("chcete vypocitat o a s kruznice? (1 - ano, 2 - ne)\n"); // výzva, jestli chcete vypočítat o a s kružnice
scanf("%d", &volba);
if (volba==1) {
    printf("jaky je prumer kruznice?\n"); // otázka, jaký je průměr kružnice
    scanf("%d", &prumer);
    obvod_sum2 = PI * prumer;
    obsah_sum2 = ((prumer * prumer) /4) * PI;
    printf("obvod kruznice je %.2f  a obsah kruznice je %.2f \n", obvod_sum2, obsah_sum2); // výpočet o a s kružnice
}
float pole[3]; // pole, ke kterému byly přiřazeny o a s kružnice
pole[1] = obvod_sum2;
pole[2] = obsah_sum2;
if (pole[1] > pole[2]) { // zjišťování, zdali je větši o nebo s
    printf("vetsi hodnota je obvod o velikosti %.2f", obvod_sum2); }
  else {
    printf("vetsi hodnota je obsah o velikosti %.2f", obsah_sum2); }

return 0; }
