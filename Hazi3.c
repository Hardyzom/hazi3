#include <stdlib.h>
#include <stdio.h>

int main()
{
    
    int szam;
    int szam1=0;
    int szamlalo=0;
    printf("Adj meg 0 végjelig egész számokat az [1,99] intervallumból!\n");
    while(1){
        scanf("%d",&szam);
        if(szam!=0){
            if(szam>99 || szam<1){
                printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
            }
            if(szam!=szam1){
                szamlalo++;
            }
            szam1=szam;
        }
        else{
            break;
        }
    }
    printf("%d db különböző szám lett megadva.", szamlalo);
    
    return 0;
}
