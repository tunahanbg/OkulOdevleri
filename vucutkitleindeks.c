#include <stdio.h>

int main(){

    float boy, kilo , indeks;

    printf("Boyunuzu giriniz: ");
    scanf("%f", &boy);
    printf("Kilo giriniz: ");
    scanf("%f", &kilo);

    indeks = (kilo / (boy * boy)) ;

    printf("Vucut kitle indeksiniz: %.2f \n", indeks);
    
    if(indeks < 18.5)
    {
        printf("Zayifsiniz.");
        return 0;
    }
    if(18.5 <= indeks && indeks< 24.9)
    {
        printf("Normal kilodasiniz.");
        return 0;
    }
    if(24.9 <= indeks && indeks < 29.9 )
    {
        printf("Kilolusunuz.");
        return 0;
    }
    if(29.9 <= indeks && indeks< 34.9 )
    {
        printf("Obezsiniz.");
        return 0;
    }
    if(34.9 <= indeks)
    {
        printf("Dehset derecede obezsiniz.");
        return 0;
    }

    return 0;
}