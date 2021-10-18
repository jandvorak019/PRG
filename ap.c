
#include <math.h>
#include <stdio.h>
int main() {
    //test funkcí (zadání al, da n).
    int a1 = 1;
    int d = 5;
    int n = 8;
    // zavolání funkce pro generování řady čísel aritmetické posloupnosti
    generuj(a1, d, n);
    // zavolání funkce pro zjištění n-tého členu posloupnosti
    an(a1, d, n);
} 
// funkce na generování řady čísel aritmetické posloupnosti
void generuj(int al, int d, int n){
     // deklarace proměné i určené pro for cyklus
     int i = 0;
     //zjištění posledního členu aritmetické posloupnosti
     int posledni_clen_ap = a1 + (n - 1) * d;
     printf("\n řada n čísel: ");
     //cyklus vypisující řadu posloupnosti
    for(i al; i <= posledni_clen_ap; i = i + d)
    {
      if(i != posledni_clen_ap)
         printf("%d - ", i);
        else
         printf("%d", i);
    }
    printf("\n");
}
//funkce na zjištění n-tého členu posloupnosti
int an(int an, int d, int n){
    //zjištění posledního členu aritmetické posloupnosti
    int posledni_clen_ap = a1 + (n - 1) * d;
    printf("Hodnota n-tého členu posloupnosti: %d", posledni_clen_ap);
 }
