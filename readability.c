#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
string ulaz = get_string("unesite tekst: ");
printf("%s\n", ulaz);
int suma_slova=0;
int suma_reci=1;
int suma_recenica=0;
        for(int i=0; i<strlen(ulaz); i++)
        {
            //predstajeca funkcija je iz biblioteke ctype.h i sluzi za konstataciju da je neki karakter slovo ili broj. Ako jeste, onda sledi sum++
            if(isalnum(ulaz[i]))
            {
                suma_slova++;
            }
            //predstojecim IFom si omogucio da lupis beskonacno spejsova, uvek ce brojati (space+prvo sledece slovo) da bi uracunao rec
            if(isspace(ulaz[i]) && isalnum(ulaz[i+1]))
            {
                suma_reci++;
            }
            if(ulaz[i] == '.' || ulaz[i] == '!' || ulaz[i] == '?')
            {
                suma_recenica++;
            }

        }
        printf("broj slova je: %i\n", suma_slova);
        printf("broj reci je: %i\n", suma_reci);
        printf("broj recenica je: %i\n", suma_recenica);

        double l = (suma_slova*100)/suma_reci;
        double s = (suma_recenica*100)/suma_reci;
        double index= 0.0588 * l - 0.296 * s - 15.8;
        
        if (index>16 )
        {
            printf("16+");
        }
        if (index>1 && index<16)
        {
// u predstojecem printf-u smo vrednost double-a zaokruzili sa round fjom math.h biblioteke, a .0 oznacava da necu decimalni broj tipa 9.00000            
        printf("indeks kompleksnosti teksta je: %.0lf", round(index));
        }
        if (index<1)
        {
        printf("before grade 1");
        }
    }
